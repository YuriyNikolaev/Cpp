// YP06_01.cpp -- if.cpp -- использование оператора if 
// на он-лайн компиляторе код не запускается
#include<iostream>

int main()
{
    using std::cin; // объявление using
    using std::cout;
    
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.') // завершение по окончании предложения
    {
        if (ch == ' ') // проверка ch на равенство пробелу
            ++spaces;
        ++total;       // выполняется на каждом шаге цикла
        cin.get(ch);
    }
    cout << spaces << " spaces, " << total; // вывод количества пробелов
                                            // и символов в предложении
    cout << " characters total in sentence\n";
    
    return 0;
}
