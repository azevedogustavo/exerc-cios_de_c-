#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void create_vector(vector<int> &vec, int size){
  int a=0;
  for (int i=0; i<size; i++){
      cin >> a;
      vec.push_back(a);
    }
  

}

void delete_range(vector<int> &vec, int a, int b, int firts_num_delete){
    vec.erase(vec.begin()+firts_num_delete-1);
    vec.erase(vec.begin()+a-1,vec.begin()+b-1); // o uso do -1 é porque o begin conta como o primeiro item do vetor
}
void print_vector(vector<int> &vec){
    //cout << "vou impmir o size do vetor \n";
    cout << vec.size() << endl;
    for(int i=0; i<vec.size(); i++)
    {
      cout<<vec[i]<<" ";
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> vec;
    int size, first_num_delete;
    cin >> size;
    int a=0, b=0, range=0;

    create_vector(vec, size);
    cin >> first_num_delete;
    cin >> a >> b;
    delete_range(vec,a,b, first_num_delete);
    print_vector(vec);
    
  return 0;

}

