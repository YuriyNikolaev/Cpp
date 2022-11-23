
// 09_05_2.cpp Класс с перегруженным конструкторам, но без конструктора по умолчанию
#include <iostream>
#include <string>
using namespace std;

class Human
{
    private:
        string name;
        int age;
    
    public:
        // Перегруженный конструктор (конструктора по умолчанию нет)
        Human(string humansName, int humansAge = 25) 
        {
            name = humansName;   
            age = humansAge;
            cout << "Перегруженный конструктор создал: ";
            cout << name << " с возрастом " << age << endl;
        }
        
        void IntroduceSelf()
        {
            cout << "Я " + name << " и мне ";
            cout << age << " лет" << endl;
        }
};

int main()
{
    Human firstMan("Adam"); 
    Human firstWoman("Ева", 20);
    
    firstMan.IntroduceSelf();
    firstWoman.IntroduceSelf();
 
    return 0;
}
