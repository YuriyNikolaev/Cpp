// YP05_11.cpp -- compstr1.cpp -- сравнение строк с использованием массивов
// сравнение строк в стиле  С
#include<iostream>
#include <cstring>

int main()
{
    using namespace std;
    char word[5] = "?ate";
    for(char ch = 'a'; strcmp(word, "mate"); ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl; // вывод word по завершении цикла
        
       
    return 0;
}
