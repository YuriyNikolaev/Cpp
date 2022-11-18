// 2_4function.cpp

#include <iostream>
using namespace std;

int DemoConsoleOutput();

int main()
{
	DemoConsoleOutput();

	return 0;
}

int DemoConsoleOutput()
{
	cout << "Простой строковый литерал" << endl;
	cout << "Запись числа пять: " << 5 << endl;
	cout << "Выполнение деления 10/5 =" << 10/5 << endl;
	cout << "Пи примерно равно 22/7 =" << 22/7 << endl;
	cout << "Более точно Пи равно 22/7 =" << 22.0/7 << endl;

	return 0; 
}