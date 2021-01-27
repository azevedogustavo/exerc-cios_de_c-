#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> vec;
    int size;
    cin >> size;
    int a;
    
    for (int i=0; i<size; i++){
      cin >> a;
      vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
     for(int i=0; i<size; i++)
    {
      cout<<vec[i]<<" ";
    }
    return 0;


}

