// YP03_06.cpp -- сравнение типов char и int
#include <iostream>

using namespace std;

int main()
{
    char ch = 'M'; // присваиваем ch код ASCII символа М
    int i = ch;    // сохраняет этот же код в int
    cout << "The ASCII code for " << ch << " is " << i << endl;
    
    cout << "Add one to the character code: " << endl;
    ch = ch + 1;     // изменяет код символа в ch
    i = ch;          // сохраняет код нового символа в i
    cout << "The ASCII code for " << ch << " is " << i << endl;
    
    // использование функции=члена cout.put() для отображения символа
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);
    
    // Использование cout.put() для отображения символьной константы
    cout.put('!');
    
    cout << endl << "Done" << endl;
    
    return 0;
}
