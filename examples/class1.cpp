#include <iostream>
#include <math.h>

using namespace std;

int main(){

    cout << "Ondalık Değer Girin: ";
    double deger = 0;

    cin >> deger;

    int a, b, c, d;
    // normal  yuvarlama kuralları geçerli
    a = round(deger);

    //floor kendisinden küçük en büyük tam sayıya yuvarlar
    b = floor(deger);

    //ceil kendisinden büyük en küçük tam sayıya yuvarlar
    c = ceil(deger);

    //trunc tam kısmını alır
    d = trunc(deger);

    //pow üs alma

    int taban, us = 0;
    char comma;
    double sonuc = 0;

    cout << "(a,b) şeklinde iki tam sayı girin: ";

    cin >> taban >> comma >> us;

    sonuc = pow(taban, us);



    cout << "Round Değer: " << a << " Floor değeri: " << b << " Ceil Değeri: " << c << " Trune değeri: " << d << " Pow Sonucu: " << sonuc << endl;

}