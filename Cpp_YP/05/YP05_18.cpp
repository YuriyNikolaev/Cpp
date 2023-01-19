// YP05_18.cpp -- textin3.cpp -- чтение символов до конца файла
#include<iostream>

int main()
{
    using namespace std;
    char ch;
    int count = 0;    // использование базового ввода
    cin.get(ch);      // попытка чтения символа
    while (cin.fail() == false) // проверка на EOF - end of file
    {
        cout << ch;  // отображение символа
        ++count;     // подсчет символов
        cin.get(ch);   // попытка чтения следующего символа
    }
    cout<< endl << count << " characters read\n";
    return 0;
}
