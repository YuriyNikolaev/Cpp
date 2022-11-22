// YP04_11.cpp -- structur.cpp -- простая струтура
#include<iostream>

struct inflatable  // объявление структуры
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest = 
    {
        "Glorious Gloria", // значение name
        1.88,              // значение volume
        29.99              // значение value
    }; // guest - струтурная переменная типа inflatable
    
    // инициализация указанными значениями
    inflatable pal = 
    {
        "Audicios Arthur",
        3.12,
        32.99
    };   // pal - вторая переменная типа inflatable
    
    // ПРИМЕЧАНИЕ: некоторые реализации требуют использования
    // static inflatable guest = 
    
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";   // pal.name - член name переменной pal
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";


    return 0;
}
