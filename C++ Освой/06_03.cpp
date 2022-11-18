#include <iostream>

using namespace std;
int main()
{
    cout << "Введите два числа: " << endl;
    float num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;
    
    cout << "Введите 'd' для деления, иное для умножения: ";
    char userSelection = '\0';
    cin >> userSelection;
    
    if (userSelection == 'd')
    {
        cout << "Вы запросили деление." << endl;
        if (num2 != 0)
            cout << num1 <<"/"<<num2<<" = " << num1/num2 << endl;
        else
            cout << "Деление на 0 запрещено." << endl;
     }
     else 
     {
         cout << "Вы запросили умножение." << endl;
         cout << num1<<"x"<<num2<<" = "<<num1*num2 << endl; 
     }
    
    return 0;
}