// 07_06.cpp несколько операторов return 
#include<iostream>
using namespace std;

const double Pi = 3.14159265;

void QueryAndCalculate()
{
    cout << "Введите радиус: ";
    double radius = 0;
    cin >> radius;
    
    cout << "Площадь: " << Pi * radius * radius << endl;
    
    cout << "Вычислять периметр (y/n)?";
    char calcCircum = 'n';
    cin >> calcCircum;
    
    if (calcCircum == 'n')
        return;
        
    cout << "Периметр: " << 2 * Pi * radius << endl;
    return;
}

int main()
{
    QueryAndCalculate();
    
    return 0;
}