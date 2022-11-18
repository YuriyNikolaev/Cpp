// YP02_ex07.cpp 
// часы
#include<iostream>
using namespace std;

void Clock(int m, int h)
{
     
    cout << "Time:  " << h << ":" << m << endl;
    
}

int main()
{
    cout << "Введите сколько часов: ";
    int hours = 0;
    cin >> hours;
    
    cout << "Введите сколько минут";
    int minute = 0;
    cin >> minute;
    
    Clock(minute, hours);
    
    return 0;
}
