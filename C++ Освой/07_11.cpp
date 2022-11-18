// 07_11.cpp использование auto в качестве возвращаемого типа функции
#include <iostream>
using namespace std;

const double Pi = 3.14159265;

auto Area(double radius)
{
    return Pi * radius * radius;
}

int main()
{
   cout << "Введите радиус: ";
   double radius = 0;
   cin >> radius;
   
   // Вызов функции Area
   cout << "Площадь равна: " << Area(radius) << endl;

    return 0;
}
