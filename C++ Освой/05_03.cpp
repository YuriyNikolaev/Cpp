#include <iostream>
using namespace std;

int main()
{
    cout << "Введите два целых числа:" << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;
    
    bool Equality = (num1 == num2);
    cout << "Проверка равенства: " << Equality << endl;
    
    bool Inquality = (num1 != num2);
    cout << "Проверка НЕравенства: " << Inquality << endl;
    
    bool GreaterThen = (num1 > num2);
    cout << "Результат сравнения: " << GreaterThen << endl;
    
 
    
    return 0;
}
