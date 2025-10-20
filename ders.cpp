#include <iostream>
#include <string>
#include <cmath> // floor ve modf için

using namespace std;

int main()
{
    while (true)
    {
        float a_float, b_float;
        int a_int, b_int;

        // Kullanıcıdan tek satırda iki float sayı al
        cout << "Sayı girin (a,b): ";
        char comma; // Virgülü yakalamak için
        cin >> a_float >> comma >> b_float;

        // Tam ve ondalık kısımları ayır
        a_int = (int)floor(a_float); // Tam kısım
        b_int = (int)floor(b_float);

        // Sayıların alındığını doğrula (örneğin, debug için)
        cout << "a: tam = " << a_int << endl;
        cout << "b: tam = " << b_int << endl;

        // Orijinal kodun mantığını koru, ancak tam kısımları (a_int, b_int) kullan
        if (a_int == 0 && b_int == 0)
        { // NULL yerine 0 kontrolü
            cout << "Lütfen geçerli sayılar girin.\n";
            continue;
        }

        cout << "Yapılması gereken işlemi girin ( + | * | - | / ): ";
        string oprtr;
        cin >> oprtr;

        float sonuc;
        if (oprtr == "+")
        {
            sonuc = a_int + b_int; // Sadece tam kısımlarla işlem
            cout << "Sonucunuz: " << sonuc << endl;
            break;
        }
        else if (oprtr == "*")
        {
            sonuc = a_int * b_int;
            cout << "Sonucunuz: " << sonuc << endl;
            break;
        }
        else if (oprtr == "-")
        {
            sonuc = a_int - b_int;
            cout << "Sonucunuz: " << sonuc << endl;
            break;
        }
        else if (oprtr == "/")
        {
            if (b_int != 0)
            {
                sonuc = (float)a_int / b_int;
                cout << "Sonucunuz: " << sonuc << endl;
                break;
            }
            else
            {
                cout << "Sonuç tanımsız! Tekrar deneyin.\n";
                continue;
            }
        }
        else
        {
            cout << "Lütfen belirtilen operatörlerden birini girin.\n";
        }
    }

    return 0;
}