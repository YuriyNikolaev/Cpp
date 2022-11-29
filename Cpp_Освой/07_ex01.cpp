// 07_ex01.cpp 
// напишите перегруженную функцию, которая вычисляет
// объем сферы и цилиндра

#include<iostream>

using namespace std;

const double Pi = 3.1416;

double Volume(double radius);

double Volume(double radius, double height);

int main()
{
    double radius = 1;
    cout << "Введите радиус: ";
    cin >> radius;
    
    cout << "Расчет объема сферы." << endl;
    cout << "Объем сферы равен = " << Volume(radius) << endl;
    
    cout << "Расчет объема цилиндра." << endl;
    
    double height = 1;
    cout << "Введите высоту цилиндра: ";
    cin >> height;
    
    cout << "Объем цилиндра равен " << Volume(radius, height) << endl;
    
    return 0;
}

double Volume(double radius)
{
    return (4 * Pi * radius * radius * radius) / 3;
    
}

double Volume(double radius, double height)
{
    return Pi * radius * radius * height;
}
