// YP03_ex03.cpp -- перевод данных о широте в десятичный вид
#include<iostream>
using namespace std;

int main()
{
    const int SecInMin = 60;
    const int MinInDegr = 60;
    
    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: " << endl;
    double degOfArc = 0;
    cin >> degOfArc;
    
    cout << "Next, enter the minutes of arc: " << endl;
    double mintOfArc = 0;
    cin >> mintOfArc;
    
    cout << "Finally, enter the seconds of arc: " << endl;
    double secOfArc = 0;
    cin >> secOfArc;
    
    double degDec = degOfArc + (mintOfArc / MinInDegr) + (secOfArc / SecInMin) / MinInDegr;
    
    cout << degOfArc << " degrees, " 
         << mintOfArc << " minutes, " 
         << secOfArc << " seconds = "
         << degDec << "degrees";


    return 0;
}
