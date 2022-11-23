// 03_dz_3.cpp

#include <iostream>
using namespace std;

int main()
{
	// запрос радиуса круга
	cout << "Введите радиус круга: ";
	double radiusCircle = 0;
	cin >> radiusCircle;

	// вводим число Пи
	const double pi = 3.1415926;
	cout << "Значение pi равно: " << pi << endl;

	// расчет площади круга
	double squareCircle;
	squareCircle = pi * radiusCircle * radiusCircle;

	cout << "Площадь круга: " << squareCircle << endl;

	// расчет периметра круга
	double perimeterCircle;
	perimeterCircle = 2 * pi * radiusCircle;

	cout << "Периметр круга: " << perimeterCircle << endl;

	return 0;
}