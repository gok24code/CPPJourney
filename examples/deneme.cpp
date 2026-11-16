#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout << "Birinci sayiyi girin: "; cin >> a;
    cout << "İkinci sayiyi girin: "; cin >> b;
    string c;
    cout << "Yapılması gereken işlemi girin (+ | - | / | *): "; cin >> c;
    
    int sonuc;
    if(c == "+"){
        sonuc = a + b;
    }else if(c == "-"){
        sonuc = a - b;
    }else if(c == "/"){
        sonuc = a / b;
    }else if(c == "*"){
        sonuc = a*b;
    }

    cout << "İstediğiniz işlemin sonucu: " << sonuc << endl;
} 