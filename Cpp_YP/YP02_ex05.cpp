// 02_ex05.cpp 
// написать функцию, перевода градусов Цельсия в град Фаренгетов
#include<iostream>

using namespace std;

double gradF(double gradC)
{
    return gradC * 1.8 + 32;
}

int main()
{
    cout << "Введите температуру в градусах Цельсия: ";
    double gradC = 0;
    cin >> gradC;
    
    cout << gradC << " градусов Цельсия, в Фаренгейтах будет равно " 
         << gradF(gradC) << " град Фарнетгейта";
    
    
    return 0;
}
