// 08_04.cpp Использование оператора разыменования * 
// для доступа к целочисленному значению
#include<iostream>
using namespace std;

int main()
{
    int age = 30;
    int dogsAge = 9;
    
    cout << "age     = " << age << endl;
    cout << "dogsAge = " << dogsAge << endl;
    
    int* pointsToInt = &age;
    cout << "pointsToInt указывает на age" << endl;
    
    // Вывод значения указателя 
    cout << "pointsToInt = 0x " << hex << pointsToInt << endl;
    
    // Вывод значения указанной области
    cout << "*pointsToInt = " << dec << *pointsToInt << endl;
    
    pointsToInt = &dogsAge;
    cout << "pointsToInt указывает на dogsAge" << endl;
    
    cout << "pointsToInt = 0x " << hex << pointsToInt << endl; 
    cout << "*pointsToInt = " << dec << *pointsToInt << endl;
    


    return 0;
}
