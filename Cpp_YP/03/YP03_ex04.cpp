// YP03_ex04.cpp -- перевод секунд в дни часы минуты и секунды
#include<iostream>
using namespace std;

int main()
{
    const int SecInMin = 60;               // секунд в минуте
    const int SecInHour = SecInMin * 60;   // секунд в часе
    const int SecInDay = SecInHour * 24;   // секунд в дне
    
    cout << "Enter the number of seconds: " << endl;
    long secondsEntered = 31'600'000;
    // cin >> secondsEntered;
    
    int days =  secondsEntered / SecInDay;
    int hours = (secondsEntered % SecInDay) / SecInHour;
    int minutes = ((secondsEntered % SecInDay) % SecInHour) / SecInMin;
    int seconds = ((secondsEntered % SecInDay) % SecInHour) % SecInMin;
    
    cout << secondsEntered << " seconds = " 
         << days << " days, " 
         << hours << " hours, "
         << minutes << " minutes, "
         << seconds << " seconds.";


    return 0;
}
