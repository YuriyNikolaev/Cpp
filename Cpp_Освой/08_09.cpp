// 08_09.cpp использование смещений и операторов инкремента-декремента
#include <iostream>
using namespace std;

int main()
{
    cout << "Количество вводимых чисел?";
    int numEntries = 0;
    cin >> numEntries;
    
    int* pointsToInts = new int[numEntries];
    
    cout << "Память выелена" << endl;
    
    for(int counter = 0; counter < numEntries; ++counter)
    {
        cout << "Введите число " << counter << ": ";
        cin >> *(pointsToInts + counter);
    }
    
    cout << "Введены числа: " << endl;
    for(int counter = 0; counter < numEntries; ++counter)
        cout << *(pointsToInts++) << " ";
    
    cout << endl;
    
    // Возврат указателя в начальную позицию
    pointsToInts -= numEntries;
    
    // Освобождение памяти
    delete[] pointsToInts;
  
    return 0;
}
