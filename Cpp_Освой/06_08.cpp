// пример 06_07.cpp через цикл while()

#include <iostream>

using namespace std;
int main()
{
    char userSelection = 'm'; // Исходное значение
    
    while(userSelection != 'x')
    {
        cout << "Введите два целых числа: " << endl;
        int num1 = 0, num2 = 0;
        cin >> num1;
        cin >> num2;
        
        cout << num1 << "x" << num2 << " = " << num1 * num2 << endl;
        cout << num1 << "+" << num2 << " = " << num1 + num2 << endl;
        
        cout << "'x' для выхода, иное для повтора" << endl;
        cin >> userSelection;
    }
    
    cout << "До свидания!" << endl;
    
    return 0;
}