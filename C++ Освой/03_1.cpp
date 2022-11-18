#include <iostream>
using namespace std;

int main()
{
    cout << "Программа умножения двух чисел" << endl;

    cout << "Введите первое число: ";
    int firstNumber = 0;
    cin >> firstNumber;

    cout << "Введите второе число: ";
    int secondNumber = 0;
    cin >> secondNumber;

    int multiplicationResult = firstNumber * secondNumber;

    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;

    return 0;
}