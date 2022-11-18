#include <iostream>

using namespace std;
int main()
{
    enum DaysOfWeek
    {
        Sunday = 0,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };
    
    
    cout << "Узнайте, в честь чего назван день недели!" << endl;
    cout << "введите номер дня недели (воскресенье = 0): ";
    
    int dayInput = Sunday;
    cin >> dayInput;
    
    switch(dayInput)
    {
        case Sunday:
        cout << "Воскресенье названо в честь Солнца" << endl;
        break;
        
        case Monday:
        cout << "Понедельник назван в честь Луны" << endl;
        break;
        
        case Tuesday:
        cout << "Вторник назван в честь Марса" << endl;
        break;
        
        case Wednesday:
        cout << "Среда назван в честь Меркурия" << endl;
        break;
        
        case Thursday:
        cout << "Четверг назван в честь Юпитера" << endl;
        break;
        
        case Friday:
        cout << "Пятница назван в честь Венеры" << endl;
        break;
        
        case Saturday:
        cout << "Суббота назван в честь Сатурна" << endl;
        break;
        
        default:
        cout << "Неверный ввод" << endl;
    }
   
 
    return 0;
}