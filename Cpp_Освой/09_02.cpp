// 09_02.cpp Модель класса Human, в которой сообщается меньший возраст
#include <iostream>

using namespace std;

class Human 
{
    private:
        // Закрытые члены
        int age;
        
    public:
        void SetAge(int inputAge)
        {
            age = inputAge;
        }
        
        // Человек лжет о своем возрасте (если ему за 30)
        int GetAge()
        {
            if (age > 30)
                return (age - 2);
            else
                return age;
        }
};

int main()
{
    // Объект Human с именем "Adam"
    Human firstMan;
    firstMan.SetAge(35);
    
    // Объект Human с именем "Eve"
    Human firstWoman;
    firstWoman.SetAge(22);
    
    cout << "Возраст firstMan " << firstMan.GetAge() << endl;
    cout << "Возраст firstWoman " << firstWoman.GetAge() << endl;
    
    return 0;
}
