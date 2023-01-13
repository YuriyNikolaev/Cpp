// YP05_13.cpp -- while.cp -- представление цикла while
#include<iostream>

const int ArSize = 20;

int main()
{
    using namespace std;
    char name[ArSize];
    
    cout << "You first name, please: "; // ввод имени
    cin >> name;
    
    // вывод имени посимвольно и в кодаж ASCII
    cout << "Here is your name, verticalized and ASCIIised:\n";
    int i = 0;               // начать с начала строки
    while (name[i] != '\0')  // обрабатывать до конца строки
    {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;                 // не забудьте этот шаг
    }
    return 0;
}
