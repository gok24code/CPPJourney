#include <iostream>
#include <caca_conio.h>

using namespace std;

int main(){
    char durum;
    durum = getche(); // girilir girilmez input alır ve devam etmez otomatik entera basmak gibidir. cin yazılıyken tek char alındıktan sonra
                        //input alır ve sistemin işlemini devam ettirir.
    system("pause");
    return 0;
}