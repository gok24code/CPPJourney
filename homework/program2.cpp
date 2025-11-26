#include <iostream>

using namespace std;

int main() {

	/*Program started signal*/
	cout << " KARGO YUKLEME PROGRAMINA HOSGELDINIZ. YUKLENIYOR..." << endl;

	/*Variables*/
	int capacity = 100;
	int weights[] = { 20, 30, 40, 50, 10 };


	/*Package taking loop*/
	for (int i = 0; i < 5; i++) {
		if (capacity - weights[i] >= 0) {
			capacity -= weights[i];
		} else {
			cout << " KAPASITE DOLDU, SEFERE CIKILIYOR." << endl;
			cout << " ALINAN KARGOLARIN AGIRLIGI: " << 100 - capacity << endl;
			cout << " ALINAN KARGOLARIN SAYISI: " << i + 1 << endl;
			break;
		}
	}

	system("pause");
	return 0;
}
