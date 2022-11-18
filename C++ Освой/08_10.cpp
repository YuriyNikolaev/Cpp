// 08_10.cpp использование const при вычислении площади круга
#include <iostream>
using namespace std;

void CalcArea(const double* const pPi,
              const double* const pRadius,
              double* const pArea)
{
    // проверка корректности указателей перед использованием
    if(pPi && pRadius && pArea)
        *pArea = (*pPi) * (*pRadius) * (*pRadius);
}


int main()
{
    const double Pi = 3.1416;
    
    cout << "Введите радиус круга: ";
    double radius = 0;
    cin >> radius;
    
    double area = 0;
    CalcArea(&Pi, &radius, &area);
    
    cout << "Площадь равна " << area << endl;
    
    return 0;
}

