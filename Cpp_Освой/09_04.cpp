
// 09_04.cpp Класс Human с несколькими конструкторами
#include <iostream>
#include <string>
using namespace std;

class Human
{
    private:
        string name;
        int age;
    
    public:
        Human() // конструктор по умолчанию
        {
            age = 0; // инициализация
            cout << "Конструктор по умолчанию" << endl;
        }
        
        Human(string humansName, int humansAge) // Перегруженный конструктор
        {
            name = humansName;   
            age = humansAge;
            cout << "Перегруженный конструктор создал: ";
            cout << name << " с возрастом " << age << endl;
        }
};

int main()
{
    Human firstMan; // конструктор по умолчанию
    Human firstWoman("Ева", 20); // Перегруженный конструктор
 
    return 0;
}
