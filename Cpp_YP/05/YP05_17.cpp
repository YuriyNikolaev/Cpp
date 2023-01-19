// YP05_17.cpp -- textin2.cpp -- использование cin.get()
// для чтение символов в цикле while
#include<iostream>

int main()
{
    using namespace std;
    char ch;
    int count = 0; // использование базового ввода
    cout << "Enter characters; enter # to quit:\n";
    cin.get(ch);      // получение символа
    while (ch != '#')
    {
        cout << ch;  // отображение символа
        ++count;     // подсчет символов
        cin.get(ch);   // получение следующего символа
    }
    
    cout<< endl << count << " characters read\n";
    return 0;
}
