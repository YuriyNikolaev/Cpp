// YP03_ex06.cpp -- расход мензина на 100 км пути
#include<iostream>
using namespace std;

int main()
{
    const int evaluationPath = 100;
    
    cout << "Введите количество км пути" << endl;
    double way_km = 1000;
    cin >> way_km;
    
    cout << "Введите расход бензина на этот путь" << endl;
    double gas = 50;
    cin >> gas;
    
    
    
    cout << "Расход бензина на 100 км пути составил " << evaluationPath * gas / way_km << " литров";
    
    


    return 0;
}
