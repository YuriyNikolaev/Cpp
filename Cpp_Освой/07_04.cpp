// 07_04.cpp функция вычисляющая площадь круга с 2м параметром по умолчанию 
#include<iostream>
using namespace std;

// Объявление функиции
double Area(double radius,    // Pi со значением по умолчанию
            double Pi = 3.14);
            
int main()
{
    cout << "Введите радиус: ";
    double radius = 0;
    cin >> radius;
    
    cout << "Pi равна 3.14. Изменить (y/n)? ";
    char changePi = 'n';
    cin >> changePi;
    
    double circleArea = 0;
    if (changePi == 'y')
    {
        cout << "Новое значение Pi: ";
        double newPi = 3.14;
        cin >> newPi;
        circleArea = Area(radius, newPi);
    }
    else 
        circleArea = Area(radius);
        
    // Вызов функции Area
    cout << "Площадь равна: " << circleArea << endl;
    
    return 0;
}

double Area(double radius, double Pi)
{
    return Pi * radius * radius;
}