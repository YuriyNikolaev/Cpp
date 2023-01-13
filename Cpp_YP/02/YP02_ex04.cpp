// YP04_ex04.cpp
#include<iostream>
using namespace std;

void AgeInMonth(int age) 
{
    cout << "Возраст в месяцах " << age * 12;
}

int main()
{
    cout << "введите свой возраст: ";
    int age = 0;
    cin >> age;
    
    AgeInMonth(age);
    
    
    
    return 0;
}
