// 08_13.cpp Пример плохого программирования и некорректных указателей
#include <iostream>
using namespace std;

int main()
{
    // Неинициализированный указатель (плохо!)
    bool* isSunny;
    
    cout << "Сегодня солнечно (y/n)? ";
    char userInput = 'y';
    cin >> userInput;
    
    if(userInput == 'y')
    {
        isSunny = new bool;
        *isSunny = true;
    }
    
    // isSunny содержит некорректное значение при вводе 'n'
    cout << "Булев флаг равен " << *isSunny << endl;
    
    // delete вызывется и тогда, когда не был вызван new
    delete isSunny;
    
    return 0;
}