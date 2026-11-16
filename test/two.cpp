#include <iostream>

using namespace std;

class sensor{
    public:
        virtual ~sensor() = default; // Sanal yıkıcı eklenir yoksa kalıtılan sınıflarda bellek sızıntısı olabilir
        // ya da yıkıcı komutu alt kalıtım sınıfında yıkıcı arar
        virtual float oku() = 0;
};

class Lidar : public sensor{
    public:
        float oku() override{
            return 1.0;
        }
};

class Kamera : public sensor{
    public:
        float oku() override{
            return 2.0;
        }
};


int main(){
// ana fonksiyonun baslangici
    while(true){
        sensor* s;
        int secim;
        cout << "Lidar icin 1, Kamera icin 2 giriniz: ";
        cin >> secim;

        switch (secim){
            case 1:
                s = new Lidar();
                break;
            case 2:
                s = new Kamera();
                break;
            default:
                cout << "Secim hatali." << "\n";
                continue;
        }
        cout << "Sensor degeri: " << s->oku() << endl;
        delete s; // Bellek sızıntısını önlemek için nesneyi sil
        break;
    }

    return 0;
}