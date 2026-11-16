#include <iostream>
#include <algorithm>

using namespace std;

struct Hedef{
    string isim;
    double merkeze_uzaklik;
};

void dump_hedefler(const vector<Hedef>& hedefler);


int main(){
    vector<Hedef> hedefler = {
        {"Hedef1", 10.5}, // begin 
        {"Hedef2", 20.3},
        {"Hedef3", 15.8} // end
    };
    
    sort(hedefler.begin(), hedefler.end(), [](const Hedef& a, const Hedef& b) {
        return a.merkeze_uzaklik < b.merkeze_uzaklik; // a ve b indisleri gezilirken tuttukları adreslerin değerlerinin birbirileriyle karşılaştırılan pointerlar
    });
    /*
    Lambda       . capture list . parameter list  . return type  . body 
                [](const Hedef& a, const Hedef& b) {
                        return a.merkeze_uzaklik < b.merkeze_uzaklik;
                }

                sort gezerken lambda ile nasıl bir karşılaştırma yapması gerektiğini sölyüyoruz
    */
    dump_hedefler(hedefler);

    return 0;
}

void dump_hedefler(const vector<Hedef>& hedefler) {
    for (const auto& hedef : hedefler) {
        cout << "Hedef: " << hedef.isim << ", Merkeze Uzaklik: " << hedef.merkeze_uzaklik << endl;
    }
}