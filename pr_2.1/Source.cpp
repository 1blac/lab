// lab_2.1.cpp
// < ������ ������ >
// ����������� ������ � 2
// ���� ��������
// ������ 30

#include <iostream>

#include <cmath>

#include <Windows.h>


using namespace std;
int a;
int main() 
{ 
	double Pi = 4 * atan(1.0); // ����� �
	double a; // ������� ��������
	double z1; // ��������� ���������� ������� ������
	double z2; // ��������� ���������� ������� ������
	

	// ��� �����
	cout << "a = "; cin >> a;

	// ����������
	z1 = sin((Pi / 2.0) + 3.0 * a) / (1.0 - sin(3.0 * a - Pi));
	z2 = 1.0 / tan((5.0 / 4.0) * Pi + (3.0 / 2.0) * a);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}	