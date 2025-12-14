#include <iostream>
#include <string>
using namespace std;

int main(){
	//----------------------------------------------------------------------------------------------------------------------
	//Line þeklinde input Girme ve Bu inputun içerisini kelime kelime bölüp bir string dizisine kaydetme iþlemi.
	cout << "Adýnýzý Soyadýnýzý Girin: " << endl;
	string ad_soyad;
	getline(cin,ad_soyad);

	if (ad_soyad.back() != ' ') {
		ad_soyad += ' ';
	}

	string kelimeler[10];
	int kelimeSayisi = 0;
	string cache = "";
	
	for (int i = 0; i < ad_soyad.length(); i++) {
		char charizard = ad_soyad[i];
		cache += charizard;

		if (ad_soyad[i] == ' ') {
			kelimeler[kelimeSayisi] = cache;
			kelimeSayisi++;
			cache = "";
		}


	}	
	//---------------------------------------------------------------------------------------------------------------------
	//Bölünmüþ ve dizi içerisinde listelenmiþ kelimelerin ilk üç karakterini '*' karakteriyle deðiþtirme iþlemi. - Blurlama
	for (int j = 0; j < 10; j++) {
		string kelime = kelimeler[j];
		for (int ck = 0; ck < kelime.length(); ck++) {
			if (ck >= 3) {
				continue;
			}
			kelime[ck] = '*';
		}
		cout << kelime << " ";
	}
	cout << endl;

	//----------------------------------------------------------------------------------------------------------------------
	return 0;
}