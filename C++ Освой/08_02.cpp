// 08_02.cpp Объявление и инициализация указателя

#include<iostream>
using namespace std;

int main()
{
    int age = 30;
    int* pointsToInt = &age; // указатель на int,
        // инициализированный занчением &age

    // Вывод значения указателя
    cout << "Адрес age: 0x" << hex << pointsToInt << endl;


    return 0;
}
