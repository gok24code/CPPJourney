#include <iostream>
#include <string>
using namespace std;

int main(){
	//----------------------------------------------------------------------------------------------------------------------
	//Line þeklinde input Girme ve Bu inputun içerisini kelime kelime bölüp bir string dizisine kaydetme iþlemi.

	//input
	cout << "Adýnýzý Soyadýnýzý Girin: " << endl;
	string ad_soyad;
	getline(cin,ad_soyad);


	//inputun sonunda for un içinde kelimenin bittiðini anlamak için boþluk charýný algýlama olayýndan dolayý sonuna boþluk ekleme
	if (ad_soyad.back() != ' ') {
		ad_soyad += ' ';
	}


	//ayrýacaðýmýz kelimelerin listelemesi için dizi oluþturma
	string kelimeler[10];
	int kelimeSayisi = 0;
	string cache = "";
	

	//yazýlan line inputun içerisindeki kelimeleri analiz etme ve dizi içerisine yazdýrma
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