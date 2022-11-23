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
    
    if (dayInput == Sunday)
        cout << "Воскресенье названо в честь Солнца" << endl;
    else if (dayInput == Monday)
        cout << "Понедельник назван в честь Луны" << endl;
    else if (dayInput == Tuesday)
        cout << "Вторник назван в честь Марса" << endl;
    else if (dayInput == Wednesday)
        cout << "Среда назван в честь Меркурия" << endl;
    else if (dayInput == Thursday)
        cout << "Четверг назван в честь Юпитера" << endl;
    else if (dayInput == Friday)
        cout << "Пятница назван в честь Венеры" << endl;
    else if (dayInput == Saturday)
        cout << "Суббота назван в честь Сатурна" << endl;
    else
        cout << "Неверный ввод" << endl;
        
    return 0;
}