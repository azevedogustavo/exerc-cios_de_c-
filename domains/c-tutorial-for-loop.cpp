#include <bits/stdc++.h>

using namespace std;
int main()
{   
    int inicial{}, final{}, tam{};
    vector<int> n(1,0);
    cin >> inicial;
    cin >> final;
    tam = final- inicial;
    for (int i =0; i<= final;i++)
    {
        n[i]=inicial;
        inicial++;
    }
    
    //tentar colcocar um vetor de string em outro momento, tentei e não funcionou;
     for(int j = 0; j <= tam; j++){
       
    if(n[j]==0)
    cout << "zero \n";
    if(n[j]==1)
    cout << "one \n";
    if(n[j]==2)
    cout << "two \n";
    if(n[j]==3)
    cout << "three \n";
    if(n[j]==4)
    cout << "four \n";
    if(n[j]==5)
    cout << "five \n";
    if(n[j]==6)
    cout << "six \n";
    if(n[j]==7)
    cout << "seven \n";
    if(n[j]==8)
    cout << "eight \n";
    if(n[j]==9)
    cout << "nine \n";
    if(n[j]>9){
    if(n[j]%2==0){
        cout << "even \n";
    }
    else
    {
        cout << "odd \n";
    }
    }
    
    }
    
    
    return 0;
}
