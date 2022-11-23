#include<iostream>
using namespace std;

int main()
{
    cout << "Использование sizeof для массива" << endl;
    int myNumbers[100] = {0};
    
    cout << "Байт для типа int: " << sizeof(int) << endl;
    cout << "Байт для массива myNumbers: " << sizeof(myNumbers) << endl;
    cout << "Байт для элемента массива: " << sizeof(myNumbers[0]) << endl;
    
    return 0;
}
