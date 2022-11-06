#include "Triada.h"
using namespace std;

Triada::Triada()
{
	year = "";
	hour = 12;
	min = 13;
	sec = 20;
}

Triada::Triada(string y, int h, int m, int s) {
	year = y;
	hour = h;
	sec = s;
	min = m;
	if (h > s) {
		cout << "г�:" << year << "\t������" << hour << endl;
	}
	else {
		cout << "г�:" << year << "\t�������" << sec << endl;
	}
	if (h > m) {
		cout << "г�:" << year << "\t������" << hour << endl;
	}
	else {
		cout << "г�:" << year << "\t������" << min << endl;
	}
	if (m > s) {
		cout << "г�:" << year << "\t������" << min << endl;
	}
	else {
		cout << "г�:" << year << "\t�������" << sec << endl;
	}
}

void Triada::Display()
{
	cout << "г�:" << year << "\t�������" << sec << endl;
	cout << "г�:" << year << "\t������" << min << endl;
	cout << "г�:" << year << "\t������" << hour << endl;

};
