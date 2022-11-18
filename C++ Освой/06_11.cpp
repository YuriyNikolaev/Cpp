// 06_11.cpp использвание цикла for без выражения изменения в заголовке цикла
#include<iostream>
using namespace std;

int main()
{
    for (char userSelection = 'm'; (userSelection != 'x'); )
    {
        cout << "Введите два целых числа: " << endl;
        int num1 = 0, num2 = 0;
        cin >> num1;
        cin >> num2;
        
        cout << num1 << "x" << num2 << " = " << num1 * num2 << endl;
        cout << num1 << "+" << num2 << " = " << num1 + num2 << endl;
        
        cout << " 'x' для выхода, иное для повтора" << endl;
        cin >> userSelection;
    }
    
    cout << "До свидания!" << endl;
    
    return 0;
}
