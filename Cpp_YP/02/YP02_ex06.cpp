// 02_ex06.cpp 
// расчет световых лет в астрономических единицах
#include<iostream>
using namespace std;

double AstroEd(double lightYears)
{
    return lightYears * 63'240;
}

int main()
{
    cout << "Введите количество световых лет: ";
    double lightYears = 0;
    cin >> lightYears;
    
    cout << lightYears << " световых лет, это будет " 
         << AstroEd(lightYears) << " астрономических единиц" << endl;
    
    
    return 0;
}
