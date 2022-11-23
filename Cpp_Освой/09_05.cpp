
// 09_05.cpp Класс с перегруженным конструкторам, но без конструктора по умолчанию
#include <iostream>
#include <string>
using namespace std;

class Human
{
    private:
        string name;
        int age;
    
    public:
        Human(string humansName, int humansAge) // Перегруженный конструктор
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
    Human firstMan("Adam", 25); 
    Human firstWoman("Ева", 20);
    
    firstMan.IntroduceSelf();
    firstWoman.IntroduceSelf();
 
    return 0;
}
