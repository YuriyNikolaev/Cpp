#include <iostream>

using namespace std;
int main()
{
    Start:  // это метка
        int num1 = 0, num2 = 0;
        
        cout << "Введите два целых числа: " << endl;
        cin >> num1;
        cin >> num2;
        
        cout << num1 << "x" << num2 << " = " << num1 * num2 << endl;
        cout << num1 << "+" << num2 << " = " << num1 + num2 << endl;
    
        cout << "Еще раз (y/n)?" << endl;
        char Repeat = 'y';
        cin >> Repeat;
        
        if (Repeat == 'y')
            goto Start;
    
        cout << "До свидания!" << endl;
    
    return 0;
}