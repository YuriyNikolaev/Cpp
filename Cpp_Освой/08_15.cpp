// 08_15.cpp Обработка исключений при неудаче оператора new
#include <iostream>
using namespace std;

// Удалите блок try-catch, если хотите аварийного заврешения
int main()
{
    try
    {
        // Запрос БОЛЬШОГО количества памяти
        int* pointsToManyNums = new int[0x1fffffff];
        // Использование памяти
        
        delete[] pointsToManyNums;
    }
    catch(bad_alloc)
    {
        cout << "Ошибка выделения памяти" << endl;
    }
    return 0;
}