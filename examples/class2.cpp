#include <iostream>
#include <time.h>
using namespace std;

void calculateRandomNumbers(int min, int max){
    srand(time(0)); // random üretimi sağlar random için gerekil şarttır.
    int base;
    base = min;
    // işlemcinin çekirdek saatine göre x kez random sayı oluşturur.
    for (int i = 0; i <= (max-min)-1; i++){
        int sayi = rand()% (max-min+1)+base; //maximum ve minimum sayı aralığında rastgele x tane sayı üretir f:(min,max) olayıdır.
        cout << sayi << endl;

    }//for sonucunda 5 adet random sayı oluşur.
}

int main(){

//Kullanıcının girdiği iki sayı arasındaki aralık boyunca rastgele sayı üreten programdır

    int a, b;
    char comma;
    cout << "Aralığı girin (min,max): ";
    cin >> a >> comma >> b;
    
    if((b-a) > 2)
        calculateRandomNumbers(a, b);
    else
        cout << "Range of numbers must greater than 2 (max-min)" << endl;
    return 0;
}