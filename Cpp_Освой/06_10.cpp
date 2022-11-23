// пример 06_08.cpp через цикл do...while()

#include <iostream>

using namespace std;
int main()
{
    const int ARRAY_LENGTH = 5;
    int myNums[ARRAY_LENGTH] = {0};
    
    cout << "Заполнение массива " << ARRAY_LENGTH
         << " числами" << endl;
    for(int counter = 0; counter < ARRAY_LENGTH; ++counter)
    {
        cout << "Элемент " << counter << ": ";
        cin >> myNums[counter];
    }
    
    cout << "Вывод содержимого массива: " << endl;
    for(int counter = 0; counter < ARRAY_LENGTH; ++counter)
        cout << "Элемент " << counter << " = "
             << myNums[counter] << endl;
    
    
    return 0;
}