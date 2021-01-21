#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string a,b;
    cin >> a >> b;
    //não precisava de vetor para solucionar a questão
    vector<int> vector{int(a.size()),int(b.size())};
    cout << vector[0] << " " << vector[1]<<endl;
    cout << a+b << endl;
    swap(a[0],b[0]);
    cout << a << " " << b;
    

    return 0;
}

