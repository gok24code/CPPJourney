#include <iostream>
#include <time.h>
using namespace std;


int main(){
    
    srand(time(0)); // random üretimi sağlar random için gerekil şarttır.
    // işlemcinin çekirdek saatine göre x kez random sayı oluşturur.
    int sayi = rand() % (100-0+1)+0; //maximum ve minimum sayı aralığında rastgele x tane sayı üretir f:(min,max) olayıdır.

    int hak = 3;
    int tahmin_edilen = 0;

    while (hak >= 0)
    {

        cout << "Tahmininizi Girin: ";
        cin >> tahmin_edilen;
        if(tahmin_edilen == sayi){
            cout << "Doğru Tahmin!!" << endl;
            break;
        }else if(tahmin_edilen > sayi){
            cout << "Yanlış Tahmin!! Tahmini azaltın." << endl;
            hak--;
        }
        else if (tahmin_edilen < sayi)
        {
            cout << "Yanlış Tahmin!! Tahmini artırın." << endl;
            hak--;
        }

        if (hak <= 0){
            hak = 0;
            cout <<endl<< "Bilemediniz. Hakkınız bitti. " << "Sayınız: " << sayi << endl;
            break;
        }else {
             cout << "Kalan Hak: " << hak << endl;
        }
    }

    return 0;
}