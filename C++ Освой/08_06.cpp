// 08_06.cpp Одинаковый размер указателей на различные типы данных
#include <iostream>
using namespace std;

int main()
{
    cout << "sizeof для типов:" << endl; 
    cout << "sizeof(char)    = " << sizeof(char) << endl; 
    cout << "sizeof(int)     = " << sizeof(int) << endl; 
    cout << "sizeof(double)  = " << sizeof(double) << endl; 
    
    cout << "sizeof для указателей типов:" << endl; 
    cout << "sizeof(char*)    = " << sizeof(char*) << endl; 
    cout << "sizeof(int*)     = " << sizeof(int*) << endl; 
    cout << "sizeof(double*)  = " << sizeof(double*) << endl; 

    return 0;
}
