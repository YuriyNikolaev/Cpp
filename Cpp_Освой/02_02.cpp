// 02_02.cpp Объявление using name
// Деректива препроцессора
#include <iostream>

int main()
{
	// Указать компилятору пространство имен для поиска 
	using namespace std;

	// Вывод на экран с использованием std::cout
	cout << "Hello World" << endl;

	// Возврат значения операционной системе
	return 0;
}
