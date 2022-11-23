// 08_12.cpp доступ к эл-там массива с использованием операторов разыменования и индексации
#include<iostream>
using namespace std;

int main()
{
    const int ARRAY_LEN = 5;
    
    // Инициализированный статический массив из 5 целых чисел
    int myNumbers[ARRAY_LEN] = {24, -1, 365, -999, 2011};
    
    // Указатель, Инициализированный первым элементом массива
    int* pointToNums = myNumbers;
    
    cout << "Указатель и оператор *:" << endl;
    for(int index = 0; index < ARRAY_LEN; ++index)
        cout << "Элемент " << index << " = "
             << *(myNumbers + index) << endl;
    
    cout << "Указатель и оператор []:" << endl;
    for(int index = 0; index < ARRAY_LEN; ++index)
         cout << "Элемент " << index << " = "
              << pointToNums[index] << endl;
    
    return 0;
}
