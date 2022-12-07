// YP04_02.cpp -- strings.cpp -- сохранение строк в массиве
#include <iostream>
#include <cstring>    // для функции strlen()

int main()
{
    using namespace std;
  
    const int Size = 15;
    char name1[Size];                 // пустой массив
    char name2[Size] = "C++owboy";    // инициализация массива
    // ПРИМЕЧАНИЕ: некоторые реализации могут потребовать
    // ключевого слова static для инициализации массива name2
    
    cout << "Howdy! I'm " << name2;
    cout << " ! What's your name?/n";
    cin >> name1;
    cout << "Well, " << name1 << ", yor name has ";

    // вывод длины имени
    cout << strlen(name1) << " letters and is stored\n";
    cout << "in array of " << sizeof(name1) << " bytes.\n";
    cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0';                                // установка нулевого символа
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;



    return 0;
}