#include <iostream>
using namespace std;

int main() {

	/* Variable Set*/
		int temps[] = { 22, 18, 35, 20, 15 };
		int sensor_val1 = temps[0];
		int sensor_val2 = temps[1];
		int sensor_val3 = temps[2];
		int sensor_val4 = temps[3];
		int sensor_val5 = temps[4];
	/*String settings with ternary operators*/
		string status1 = (sensor_val1 < 20) ? "ISITILIYOR" : "NORMAL" && (sensor_val1 > 30) ? "SOGUTULUYOR" : "NORMAL";
		string status2 = (sensor_val2 < 20) ? "ISITILIYOR" : "NORMAL" && (sensor_val2 > 30) ? "SOGUTULUYOR" : "NORMAL";
		string status3 = (sensor_val3 < 20) ? "ISITILIYOR" : "NORMAL" && (sensor_val3 > 30) ? "SOGUTULUYOR" : "NORMAL";
		string status4 = (sensor_val4 < 20) ? "ISITILIYOR" : "NORMAL" && (sensor_val4 > 30) ? "SOGUTULUYOR" : "NORMAL";
		string status5 = (sensor_val5 < 20) ? "ISITILIYOR" : "NORMAL" && (sensor_val5 > 30) ? "SOGUTULUYOR" : "NORMAL";
	/*Printing to screen*/
		cout << "1.Sensor: (" << sensor_val1 << ") " << status1 << endl;
		cout << "2.Sensor: (" << sensor_val2 << ") " << status2 << endl;
		cout << "3.Sensor: (" << sensor_val3 << ") " << status3 << endl;
		cout << "4.Sensor: (" << sensor_val4 << ") " << status4 << endl;
		cout << "5sSensor: (" << sensor_val5 << ") " << status5 << endl;

		system("pause");
	return 0;
}
