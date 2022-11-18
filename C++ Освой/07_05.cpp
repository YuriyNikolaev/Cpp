// 07_05.cpp рекурсивная функция вычисляющая ряд чисел Фибоначчи 
#include<iostream>
using namespace std;

int GetFibNumber(int fibIndex)
{
    if (fibIndex < 2)
        return fibIndex;
    else // рекурсия, если fibIndex >= 2
        return GetFibNumber(fibIndex-1) + GetFibNumber(fibIndex-2);
}

int main()
{
    cout << "Введите индекс числа Фибоначчи, начиная с 0: ";
    int index = 0;
    cin >> index;
    
    cout << "Число Фибоначчи: " << GetFibNumber(index) << endl;
    
    return 0;
}
