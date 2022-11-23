// 02_04.cpp Объявление, определение и вызов функции, 
// демонстрирующий возможности std::cout
#include <iostream>
using namespace std;

// Объявление функции
int DemoConsoleOutput();

int main()
{
	// Вызов функции
	DemoConsoleOutput();

	return 0;
} 

// Определени, т.е реализация объявленной ранее функции
int DemoConsoleOutput()
{
	cout << "Простой строковый литерал" << endl;
	cout << "Запись числа пять: " << 5 << endl;
	cout << "Выполнение деления 10/5 " << 10/5 << endl;
	cout << "Пи примерно равно 22/7 " << 22/7 << endl;
	cout << "Более точно Пи равно 22/7 " << 22.0/7 << endl;
	
	return 0;
}