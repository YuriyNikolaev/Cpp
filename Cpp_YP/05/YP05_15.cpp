// YP05_15.cpp -- dowhile.cpp -- цикл с проверкой на выходе
#include<iostream>

int main()
{
    using namespace std;
    int n;
    cout << "Enter numbers in the range 1-10 to find ";
    cout << "my favourite number\n"; // запрос на ввод любимого числа
    // из диапазона 1-10
    do{
        cin >> n;
    } while (n != 7);
    
    cout << "Yes, 7 is my favourite.\n";  // любимое число 7
    
    return 0;
}
