
/* 11. Створити клас Triad (трійка чисел); визначити метод порівняння
тріад. Визначити похідний клас Time з полями: година, хвилина й секунда.
Визначити повний набір методів порівняння моментів часу.
*/


#include<iostream>
#include<string>
#include"Triada.h"
#include"Chas.h"
#include<Windows.h>

using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Triada one("2017", 10, 9, 8);
	one.Display();
	Chas two("2000", 20, 14, 16, "слово");
	two.Display();

	if (two.checkTime(two) == true)
		cout << "Все вірно!!!!!!";
	else 
		cout << "Не вірно(((((";

	return 0;
};
