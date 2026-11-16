#include <iostream>

using namespace std;

struct GcodeNode{
    int x,y;
    GcodeNode* next;
};


GcodeNode* parse_ve_kutula(char* ham_veri){        
        bool have_seen = false;

            char* first = ham_veri + 2; //dizi notasyonunun ilk indisinin adresini tutup diğer verilerine işaret de etmesi mantığı
            // sayesinde sadece 1002. adresteki chara bakarak ondan sonrakileri de bulabilir erişebilir hale geliyoruz
            char* last = nullptr;
        for (int i = 0; *ham_veri != '\0'; i++){
            if(*ham_veri == ','){
                *ham_veri = '\0';
                last = ham_veri +3; // dizi mantığı dizi nasıl kendi ilk indexinin adresini tutuyorsa onun gibi
                have_seen = true;
            }
            ham_veri++;

        }

        //heap.

        GcodeNode* yeni_kutu = new GcodeNode;
        yeni_kutu->x = atoi(first);
        yeni_kutu->y = atoi(last);
        yeni_kutu->next = nullptr;

        return yeni_kutu;
};
    

int main(){

    char veri[] = "X:45,Y:10";
    GcodeNode* node = parse_ve_kutula(veri);


    cout << "x:" << node->x << "y:" << node->y << endl;

    delete node;
    return 0;
}