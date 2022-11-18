// 08_03.cpp Присваивание указателю адреса другой переменной

#include<iostream>
using namespace std;

int main()
{
    int age = 30;
    
    int* pointsToInt = &age;
    cout << "pointsToInt указывает на age" << endl;
    
    // Вывод значения указателя
    cout << "pointsToInt = 0x " << hex << pointsToInt << endl;
    
    int dogsAge = 9;
    pointsToInt = &dogsAge;
    cout << "pointsToInt указывает на dogsAge" << endl;
    
    cout << "pointsToInt = 0x " << hex << pointsToInt << endl;


    return 0;
}
