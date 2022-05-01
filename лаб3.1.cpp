// Lab_03_1.cpp
// < Яшина Світлана >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 24




#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу

	cout << "x ="; cin >> x;

	A = x;

	// спосіб 1: розгалуження в скороченій формі
	if (x <= -1)
	B = log(abs(cos(5 * x))) + exp(1 / x + x);
	if (-1 < x && x < 0.4)
	B = sqrt(pow(2 - x, 3)) - sin(x) / cos(x);
	if (x >= 0.4)
	B = sin(5 * x) - sqrt(abs(1 - x));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x <= -1)
		B = log(abs(cos(5 * x))) + exp(1 / x + x);
	else
		if (-1 < x && x < 0.4)
			B = sqrt(pow(2 - x, 3)) - sin(x) / cos(x);
		else
			B = sin(5 * x) - sqrt(abs(1 - x));
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}




