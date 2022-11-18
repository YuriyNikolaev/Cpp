// 08_18.cpp Возврат результата через параметр, передаваемый по ссылке 
#include<iostream>
using namespace std;

void GetSquare(int& number)
{
    number *= number;
}

int main()
{
    cout << "Введите число: ";
    int number = 0;
    cin >> number;
    
    GetSquare(number);
    
    cout << "Квадрат равен: " << number << endl;
    
    return 0;
}
