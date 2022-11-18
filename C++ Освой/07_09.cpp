#include <iostream>
using namespace std;

const double Pi = 3.1416;

// Выходной параметр result, передаваемый по ссылке
void Area(double radius, double& result)
{
    result = Pi * radius * radius;
}

int main()
{
    cout << "Введите радиус: ";
    double radius = 0;
    cin >> radius;
    
    double areaFetched = 0;
    Area(radius, areaFetched);
    
    cout << "Площадь равна: " << areaFetched << endl;

    return 0;
}
