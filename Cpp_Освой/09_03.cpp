
// 09_03.cpp Использование конструктора для инициализации переменных-членов класса
#include <iostream>
#include <string>
using namespace std;

class Human
{
    private:
        string name;
        int age;
    
    public:
        Human() // конструктор
        {
            age = 0; // инициализация
            cout << "Конструирование объекта Human" << endl;
        }
        
        void SetName (string humansName)
        {
            name = humansName;
        }
        
        void SetAge (int humansAge)
        {
            age = humansAge;
        }
        
        void IntroduceSelf()
        {
            cout << "Я " + name << " и мне ";
            cout << age << " лет" << endl;
        }
};

int main()
{
    Human firstWoman;
    firstWoman.SetName("Ева");
    firstWoman.SetAge(28);
    
    firstWoman.IntroduceSelf();
    
    return 0;
}
