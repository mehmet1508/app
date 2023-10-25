#include <iostream>
#include<string.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	int puan;
	cout << "0-100 arası bir puan giriniz ";
	cin >> puan;
	if (puan >= 85 && puan <= 100) {
		cout << "5";
	}
	else if (puan >= 70 && puan <= 84) {
		cout << "4";
	}
	else if (puan >= 55 && puan <= 69) {
		cout << "3";
	}
	else if (puan >= 45 && puan <= 54) {
		cout << "2";
	}
	else if (puan >= 0 && puan <= 44) {
		cout << "1";
	}
	else {
		cout << "böyle bir puan yok";  
	}
	
}
