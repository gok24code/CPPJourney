#include <iostream>

using namespace std;

int main() {

	/* Variables*/
	int greaterint = 0;
	int cacheint1 = 0;
	int cacheint2 = 0;
	int lessint = 100;
	int grades[] = { 20, 70, 65, 80, 100, 45, 55, 30 };
	int founded_greater_index = 0;
	int sum = 0;
	int average = 0;
	

	/*Detecting greater point*/
	for (int i = 0; i <7; i++) {
		if (grades[i] < grades[i + 1]) {
			cacheint1 = grades[i+1];
			if (cacheint1 > greaterint)	greaterint = cacheint1;
		}
		else {
			cacheint1 = grades[i];
			if (cacheint1 > greaterint)	greaterint = cacheint1;
		}

	}
	/*Finding greater point's index of in array*/
	for (int i = 0; i < 8; i++) {
		if (grades[i] == greaterint) {
			founded_greater_index = i;
		}
	}
	/*Detecting less point*/
	for (int i = 0; i < 7; i++) {
		if (grades[i] > grades[i + 1]) {
			cacheint2 = grades[i + 1];
			if (cacheint2 < lessint) lessint = cacheint2;
		}
		else {
			cacheint2 = grades[i]; 
			if (cacheint2 < lessint) lessint = cacheint2;
		}
	}


	/*Average Calculating*/

	for (int i = 0; i < 8; i++) {
		sum += grades[i];
		average = sum / (sizeof(grades) / sizeof(grades[0]));

	}
	
	/*Pass of Fail situation*/
	for (int i = 0; i < 8; i++) {
		if (grades[i] >= average) {
			cout << grades[i] << " GECTI." << endl;
		}
		else {
			cout << grades[i] << " KALDI." << endl;
		}

	}
	/*Printing max and min point to screen*/
	cout << greaterint << " EN BUYUK NOTTUR." << " Bu not " << founded_greater_index << ". indistedir. " << lessint << " EN KUCUK NOTTUR." << endl;


	system("pause");
	return 0;
}
