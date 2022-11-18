// 07_02.cpp расчет площади цилиндра 
#include<iostream>
using namespace std;


const double Pi = 3.14159;

// Объявление функций (прототипы)
double SurfaceArea(double radius, double height);


int main()
{
    cout << "Радиус цилиндра: ";
    double radius = 0;
    cin >>  radius;
    cout<< "Высота цилиндра: ";
    double height = 0;
    cin >> height;
    
    cout << "Площадь поверхности: " << SurfaceArea(radius, height) << endl;
    
    return 0;
}

// Определение функций (реализации)
double SurfaceArea(double radius, double height)
{
    double area = 2*Pi*radius*(radius + height);
    return area;
}

