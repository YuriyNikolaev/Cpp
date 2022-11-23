// YP03_ex02.cpp -- расчет индекса массы тела
#include<iostream>

using namespace std;

int main()
{
    // константы перевода едениц
    const int Inch_In_Foot = 12;
    const double Inch_In_Metr = 0.0254;
    const double Kg_In_Pound = 2.2;
    
    cout << "Enter your height in feet ";
    int heightInFeet = 0;
    cin >> heightInFeet;
    
    cout << "Enter inches of your height  ";
    int heightInInch = 0;
    cin >> heightInInch;
    
    // перевод роста в дюймы
    int height = heightInFeet * Inch_In_Foot + heightInInch;
    cout << "Ваш рост в дюймах равен " << height << endl;
    
    // перевод роста в метры
    double heightInMetr = height * Inch_In_Metr;
    cout << "Ваш рост в  метрах " << heightInMetr << endl;
    
    cout << "Enter your weight in pounds: ";
    int lbs = 0;
    cin >> lbs;
    
    // перевод веса из фунтов в кг
    double weightInKg = lbs * Kg_In_Pound;
    cout << "Your weight in kg " <<  weightInKg << endl;
    
    // расчет индекса массы тела BMI
    cout << "BMI равен " << weightInKg / (heightInMetr * heightInMetr);
    
    return 0;
}
