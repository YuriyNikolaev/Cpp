// 08_16.cpp Использование оператора new(nothrow)
#include <iostream>
using namespace std;


int main()
{
    // Запрос большого количества памяти с помощью new(nothrow)
    int* pointsToNum = new(nothrow) int[0x1ffffffff];
    
    if(pointsToNum) // Проверка pointsToNum != nullptr
    {
        // Использование выделенной памяти
        delete[] pointsToNum;
    }
    else 
        cout << "Ошибка выделения памяти" << endl;
    
    return 0;
}