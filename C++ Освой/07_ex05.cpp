// 07_ex05.cpp написать функцию void, которая сопособна вернуть вызывающей стороне 
// вычесленные площадь и периметр круга заданного радиуса
#include<iostream>
using namespace std;

const double Pi = 3.1416;

void Area(double radius, double &squaer, double &perimetr)
{
    // площадь кргу
    squaer = Pi * radius * radius;
    
    // периметр круга
    perimetr = 2 * Pi * radius;
}

int main()
{
    cout<<"Введите радиус круга: ";
    double radius = 0;
    cin >> radius;
    
    double squaer = 0;
    double perimetr = 0;
    
    Area(radius, squaer, perimetr);
    
    cout << "площадь равна: " << squaer << endl;
    cout << "периметр равен: " << perimetr << endl;
    
    
    return 0;
}
