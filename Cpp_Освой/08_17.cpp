// 08_17.cpp Ссылки - псеводнимы переменных 
#include<iostream>
using namespace std;

int main()
{
    int original = 30;
    cout << "original = " << original << endl;
    cout << "Адрес original: " << hex << &original << endl;
    
    int& ref = original;
    cout << "Адрес ref:      " << hex << &ref << endl;
    
    
    int& ref2 = ref;
    cout << "Адрес ref2:     " << hex << &ref2 << endl;
    cout << "ref2 = " << dec << ref2 << endl;
    
    return 0;
}
