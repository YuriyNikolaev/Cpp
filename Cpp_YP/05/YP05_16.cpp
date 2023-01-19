// YP05_16.cpp -- textinl.cpp -- чтение символов в цикле while
#include<iostream>
using namespace std;

int main()
{
    char ch;
    int count = 0; // использование базового ввода
    cout << "Enter characters; enter # to quit:\n";
    cin >> ch;      // получение символа
    while (ch != '#')
    {
        cout << ch;  // отображение символа
        ++count;     // подсчет символов
        cin >> ch;   // получение следующего символа
    }
    
    cout<< endl << count << " characters read\n";
    return 0;
}
