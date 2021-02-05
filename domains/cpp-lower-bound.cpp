#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void fill_vector(vector<int> &vec){
    static bool pass=true;
    if (pass){
    vec = {10, 11, 12, 13, 14, 15};
    pass=false;
    }
    else vec = {8, 10, 12, 13};

}
void analise(vector<int> &vec, vector<int> &vecq){
   
    for(int i=0; i<vecq.size(); i++){
        vector<int>::iterator low = lower_bound(vec.begin(), vec.end(), vecq[i]);
        if (vec[low - vec.begin()] == vecq[i])
           cout << "Yes " << (low - vec.begin()+1) << endl;
       else
           cout << "No " << (low - vec.begin()+1) << endl;
    }

}
void create_vector(vector<int> &vec){
    int value{}, size{};
    cin >> size;
    for(int i=0; i<size; i++){
        cin >> value;
        vec.push_back(value);
    }
}
int main() {
    vector<int> vet, vetq;
    // fill_vector(vet);
    // fill_vector(vetq);
    create_vector(vet);
    create_vector(vetq);

    analise(vet, vetq);
    
    return 0;
}
