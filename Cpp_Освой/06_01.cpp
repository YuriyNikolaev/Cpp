#include <iostream>
using namespace std;

int main()
{
    cout << "Введите два целых числа: " << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;
    
    cout << "\'m\' для умножения, любое иное для сложения: ";
    char userSelection = '\0';
    cin >> userSelection;
    
    int result = 0;
    if (userSelection == 'm')
        result = num1 * num2;    
    else
        result = num1 + num2;
        
    cout << "Результат: " << result << endl;
    
    return 0;
}