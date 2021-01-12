#include <iostream>
// esse código possui um array já instanciado
// como o programa é pequeno, não achei necessário separar as funções em um outro arquivo
int max_value(int *candles, int size);
int repeated_quantities(int *candles, int size, int val_max);

int main(){
    int array[] = {10,4,6,4};
    std::cout << "os maiores valores das 'velas' e suas contidades repetidas em um array \n";
    int val_max{};
    int val_max_repeat{};
    int array_size=sizeof(array) / sizeof(array[0]);
    // lembrar que o comprimento do array é definido pelo seu tamanho em memória dividio por um 
    // componente do array. EX: sizeof(array) / sizeof(array[0])
    val_max = max_value(array, array_size);
    val_max_repeat = repeated_quantities(array, array_size, val_max);
     
     if (val_max_repeat > 1)
     std::cout << "os valore da velas mais altas é " << val_max << " com " 
     << val_max_repeat << " repeticoes ";
     if (val_max_repeat == 1)
    std::cout << "os valore da velas mais altas é " << val_max << " com " 
    << val_max_repeat << " repeticao ";
     else
     std::cout << "os valore da velas mais altas é " << val_max << " sem repeticao \n";
    //std::cout<< sizeof(candles);
}

int max_value(int *candles, int size){
    int val_max{};
    for(int i=0; i < sizeof(candles) / sizeof(candles[0]); i++){
         //std::cout<< candles[i] << " ";
         if (val_max < candles[i])
         val_max=candles[i];
         }
         return val_max;
}
int repeated_quantities(int *candles, int size, int val_max){
    int val_max_repeat={};
for(int i=0; i < sizeof(candles) / sizeof(candles[0]); i++){
         if(val_max==candles[i])
         val_max_repeat++;
     }
     return val_max_repeat;
}