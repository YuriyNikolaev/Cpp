#include <iostream>
using namespace std;

void MultiplyNumbers()
{
    cout << "Введите первое число: ";
    int firstNumber = 0;
    cin >> firstNumber;
    
    cout << "Введите второе число: ";
    int secondNumber = 0;
    cin >> secondNumber;
    
    int multiplicationResult = firstNumber * secondNumber;
    
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;
}

int main()
{
    cout << "Программа для умножения двух чисел" << endl;
    
    MultiplyNumbers();
    
    return 0;
}