// YP04_07.cpp -- strtype1.cpp -- использование класса С++ string
#include<iostream>
#include <string>  // обеспечение доступа к классу стринг

using namespace std;

int main()
{
    char charr1[20];            // создание пустого массива
    char charr2[20] = "jaguar"; // создание инициализированного массива
    
    string str1;                // создание пустого объекта строки
    string str2 = "panter";     // создание инициализированного объекта строки
    
    cout << "Enter a kind of feline: ";
        // введите животное семейства кошачьих
    cin >> charr1;
    
    cout << "Enter another kind of feline: ";
        // введите другое животное из семейства кошачьих
    cin >> str1;                 // использование cin для ввода
    
    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2 << " "
         << str1 << " " << str2   // использование cout для вывода
         << endl;
    
    cout << "The third letter in " << charr2 << " is "
         << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is "
         << str2[2] << endl;      // использование нотации массивов
    
    return 0;
}
