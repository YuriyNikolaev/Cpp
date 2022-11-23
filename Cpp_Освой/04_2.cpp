#include <iostream>
using namespace std;
constexpr int Square (int number) { return number * number ; }

int main()
{
    const int ARRAY_LENGTH = 5;
    
    int myNumbers[ARRAY_LENGTH] = {5, 10, 0, -101, 20};
    
    int moreNumbers[Square(ARRAY_LENGTH)];
    
    cout << "Введите индекс изменяемого элемента: ";
    int elementIndex = 0;
    cin >> elementIndex;
    
    cout << "Введите новое значение изменяемого элемента: ";
    int newValue = 0;
    cin >> newValue;
    
    myNumbers[elementIndex] = newValue;
    moreNumbers[elementIndex] = newValue;
    
    cout << "Элемент " << elementIndex << " myNumbers равен: ";
    cout << myNumbers[elementIndex] << endl;
    
    cout << "Элемент " << elementIndex << " moreNumbers равен: ";
    cout << moreNumbers[elementIndex] << endl;

    
    return 0;
}