// 08_08.cpp использование new[] и delete[]
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Количество чисел в массиве?" << endl;
    int numEntries = 0;
    cin >> numEntries;
    
    int* myNumbers = new int[numEntries];
    
    cout << "Выделена память по адресу: 0х"
         << myNumbers << hex << endl;
         
    // Освобождение памяти
    delete[] myNumbers;
    
    
    return 0;
}
