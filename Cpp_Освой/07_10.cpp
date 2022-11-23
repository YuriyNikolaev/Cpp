#include <iostream>
using namespace std;

// Определение встраиваемой функции
inline long DoubleNum(int inputNum)
{
    return inputNum * 2;
}

int main()
{
   cout << "Введите целое число: ";
   int inputNum = 0;
   cin >> inputNum;
   
   // Вызов встраиваемой функции
   cout << "После удвоения: " << DoubleNum(inputNum) << endl;

    return 0;
}
