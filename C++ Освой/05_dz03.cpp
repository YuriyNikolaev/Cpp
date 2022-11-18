#include<iostream>
using namespace std;

int main()
{   
    cout << "Введите значение true(1) или false(0): ";
    bool value1 = false;
    cin >> value1;
    
    cout << "Введите второе значение true(1) или false(0): ";
    bool value2 = false;
    cin >> value2;
    
    cout << "Результат лигических операций: " << endl;
    cout << "И: " << (value1 & value2) << endl;
    cout << "ИЛИ: " << (value1 | value2) << endl;
    cout << "ИСКЛЮЧАЮЩЕЕ ИЛИ: " << (value1 ^ value2) << endl;
    
    return 0;
}
