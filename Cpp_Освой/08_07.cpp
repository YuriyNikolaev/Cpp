// 08_07.cpp Динамическое выделение и освобождение памяти
#include <iostream>
using namespace std;

int main()
{
    // Выделение памяти для int
    int* pointsToAnAge = new int;
    
    // Использование выделенной памяти
    cout << "Введите возраст собаки: ";
    cin >> *pointsToAnAge;
    
    //Применение оператора разыменования *
    cout << "Возраст " << *pointsToAnAge << " хранится по "
         << "адресу 0х" << hex << pointsToAnAge << endl;
         
    delete pointsToAnAge;    // Освобождение памяти

    return 0;
}
