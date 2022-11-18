// 08_11.cpp Переменная массива - это указатель на первый его элемент
#include <iostream>
using namespace std;

int main()
{
    // Статический массив из 5 целых чисел
    int myNumbers[5];
    
    // Массив присваивается указателю на тип int
    int* poinToNUms = myNumbers;
    
    // Вывод адреса, содержащегося в указателе
    cout << "poinToNUms = 0x" << hex << poinToNUms << endl;
    
    // Адрес первого элемента массива
    cout << "&myNumbers[0] = 0x" << hex << &myNumbers[0] << endl;
    
    
    
    
    return 0;
}

