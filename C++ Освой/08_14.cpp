// 08_14.cpp Безопасная версия кода листинга 08_13.cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Сегодня солнечно (y/n)? ";
    char userInput = 'y';
    cin >> userInput;
    
    // Объявление и инициализация указателя
    bool* const isSunny = new bool;
    *isSunny = true;
    
    if(userInput == 'n')
        *isSunny = false;
    
    cout << "Булев флаг равен  " << *isSunny << endl;
    
    // Освобождение выделенной памяти
    delete isSunny;
    
    return 0;
}