// 08_01.cpp Определение адресов переменных типа int и double

#include<iostream>
using namespace std;

int main()
{
    int age = 30;
    const double Pi = 3.1416;

    // Использование & для поиска адреса в памяти
    
    cout << "Адрес age: 0x" << hex << &age << endl;
    cout << "Адрес Pi:  0x" << hex << &Pi  << endl;


    return 0;
}
