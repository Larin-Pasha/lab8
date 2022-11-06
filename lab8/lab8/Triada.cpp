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
		cout << "Рік:" << year << "\tгодини" << hour << endl;
	}
	else {
		cout << "Рік:" << year << "\tсекунди" << sec << endl;
	}
	if (h > m) {
		cout << "Рік:" << year << "\tгодини" << hour << endl;
	}
	else {
		cout << "Рік:" << year << "\tминути" << min << endl;
	}
	if (m > s) {
		cout << "Рік:" << year << "\tминути" << min << endl;
	}
	else {
		cout << "Рік:" << year << "\tсекунди" << sec << endl;
	}
}

void Triada::Display()
{
	cout << "Рік:" << year << "\tсекунди" << sec << endl;
	cout << "Рік:" << year << "\tминути" << min << endl;
	cout << "Рік:" << year << "\tгодини" << hour << endl;

};
