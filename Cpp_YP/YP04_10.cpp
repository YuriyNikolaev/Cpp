// YP04_10.cpp -- strtype4.cpp -- ввод строки с пробелами
#include<iostream>
#include <string>  // обеспечение доступа к классу string
#include <cstring> // библиотека обработок строк в стиле С

using namespace std;

int main()
{
    char charr[20];            
    string str;               
    
    // Длина строки в charr перед вводом
    cout << "Length of string in charr before input: "
         << strlen(charr) << endl;
    // Длин строки в str перед вводом
    cout << "Length of string in str before input: "
         << str.size() << endl;
    
    cout << "Enter a line of text:\n"; // ввод строки текста
    cin.getline(charr, 20);            // указание максимальной длины
    
    cout << "you entered: " << charr << endl;
    cout << "Enter another line of text:\n"; // ввод другой строки
    getline(cin, str);                       // теперь cin - аргумент: спецификатор длины отсутствует
    cout << "You entered: " << str << endl;
    
    // Длина строки в charr после ввода
    cout << "Length of string in charr after input: "
         << strlen(charr) << endl;
    // Длина строки в str после ввода
    cout << "Length of string in str after input: "
         << str.size() << endl;
    
    return 0;
}
