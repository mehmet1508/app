#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	double bacteria;
	int h;
	bacteria = 1000;
	for (h = 0;h <= 24;h++) {
		bacteria = bacteria + (bacteria * 150 / 100);
		cout << bacteria << endl;


			

	}
}