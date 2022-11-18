// 08_05.cpp Работа с данными с помощь указателя и оператора разыменования * 

#include<iostream>
using namespace std;

int main()
{
    int dogsAge = 30;
  
    cout << "Изначально dogsAge = " << dogsAge << endl;
    
    int* pAge = &dogsAge;
    cout << "pAge указывает на dogsAge" << endl;
    
    cout << "Введите значени dogsAge: ";
    
    // Сохранение значения в области памяти по адресу pAge
    cin >> *pAge;
    
    // Вывод адреса
    cout << "Значение сохранено по адресу 0х"
         << hex << pAge << endl;
    cout << "Теперь dogsAge = " << dec << dogsAge << endl;
    
    return 0;
}
