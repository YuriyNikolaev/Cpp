// YP03_ex01.cpp
#include<iostream>

using namespace std;

int main()
{
    const int Inch_In_Foot = 12;
    
    cout << "Enter your height ";
    int height = 0;
    cin >> height;
    
    int feet = height / Inch_In_Foot;
    int inches = height % Inch_In_Foot;
    
    cout << "Your height is " << feet << " and " << inches << " inches.";
    
    
    return 0;
}
