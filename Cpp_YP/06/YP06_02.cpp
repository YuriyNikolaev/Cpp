// YP06_02.cpp -- ifelse.cpp -- использование оператора if 
#include<iostream>

int main()
{
    char ch;
    std::cout << "Type, and I shall repeat.\n"; // запрос на ввод строки
    std::cin.get(ch);
    
    while (ch != '.')
    {
        if (ch == ' ')
            std::cout << ch;  // выполнение в случае символа новой строки
        else
            std::cout << ++ch; // выполнение в противном случае
        std::cin.get(ch);
    }
    
    // попробуйте ch + 1 вместо ++ch, чтобы увидет инетерсный эффект
    std::cout << "\nPlease excuse the slight confusion.\n";
    
    //std::cin.get();
    //std::cin.get();
    return 0;
}
