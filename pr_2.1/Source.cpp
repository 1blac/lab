// lab_2.1.cpp
// < Чорний Дмитро >
// Лабораторна робота № 2
// лінійні програми
// варіант 30

#include <iostream>

#include <cmath>

#include <Windows.h>


using namespace std;
int a;
int main() 
{ 
	double Pi = 4 * atan(1.0); // число пі
	double a; // вхідний параметр
	double z1; // результат обчислення першого виразу
	double z2; // результат обчислення другого виразу
	

	// ввід даних
	cout << "a = "; cin >> a;

	// обчислення
	z1 = sin((Pi / 2.0) + 3.0 * a) / (1.0 - sin(3.0 * a - Pi));
	z2 = 1.0 / tan((5.0 / 4.0) * Pi + (3.0 / 2.0) * a);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}	