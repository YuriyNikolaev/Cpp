// YP05_19.cpp -- textin4.cpp -- чтение символов до конца файла
#include<iostream>

int main()
{
    using namespace std;
    int ch;            // должен быть тип int, а не char
    int count = 0;    // использование базового ввода
    ;    // попытка чтения символа
    while ((ch = cin.get()) != EOF) // проверка на EOF - end of file
    {
        cout.put(char(ch));  // отображение символа
        ++count;     // подсчет символов
    }
    cout<< endl << count << " characters read\n";
    return 0;
}

