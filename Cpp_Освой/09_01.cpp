// 09_01.cpp Готовый для компиляции класс Human
#include <iostream>
#include <string>
using namespace std;

class Human 
{
   public:
    string name;
    int age;
    
    void IntroduceSelf()
    {
        cout << "Я " + name << " и мне ";
        cout << age << " лет" << endl;
    }
};

int main()
{
    // Объект Human с именем "Adam"
    Human firstMan;
    firstMan.name = "Adam";
    firstMan.age = 30;
    
    // Объект Human с именем "Eve"
    Human firstWoman;
    firstWoman.name = "Eve";
    firstWoman.age = 28;
    
    firstMan.IntroduceSelf();
    firstWoman.IntroduceSelf();
   
   
    return 0;
}
