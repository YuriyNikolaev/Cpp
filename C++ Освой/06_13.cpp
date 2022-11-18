// 06_13.cpp управление бесконечным циклом
#include<iostream>

using namespace std;

int main()
{
    for(;;) // Бесконечный цикл
    {
        cout << "Введите два целых числа: " << endl;
        int num1 = 0, num2 = 0;
        cin >> num1;
        cin >> num2;
        
        cout << "Вы хотите исправить ввод? (y/n): ";
        char changeNumbers = '\0';
        cin >> changeNumbers;
        
        if(changeNumbers == 'y')
            continue; // перезапуск цикла
        
        cout << num1 << "x" << num2 << " = " << num1 * num2 << endl;
        cout << num1 << "+" << num2 << " = " << num1 + num2 << endl;
        
        cout << "'x' для выхода, иное для повтора" << endl;
        char userSelection = '\0';
        cin >> userSelection;
        
        if(userSelection == 'x')
            break; // выход из бесконечного цикла
    }
    
    cout << "До свидания!" << endl;
    
    return 0;
}
