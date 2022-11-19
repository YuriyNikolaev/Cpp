
// 09_06.cpp конструктор со значениями по умолчанию и списком инициализации
#include <iostream>
#include <string>
using namespace std;

class Human
{
    private:
        string name;
        int age;
    
    public:
        Human(string humansName = "Adam", int humansAge = 25)
            :name(humansName), age(humansAge)
        {
            cout << "Перегруженный конструктор создал: ";
            cout << name << " с возрастом " << age << endl;
        }
        
};

int main()
{
    Human firstMan; 
    Human firstWoman("Ева", 18);

    return 0;
}