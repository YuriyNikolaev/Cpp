// ЯП02_04.cpp sqrt
#include<iostream>
#include <cmath> // или math.h

using namespace std;

int main()
{
    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    
    double side;
    side = sqrt(area);
    cout << "That's the equivalente of a square " << side 
         << " feet tj the side." << endl;
    cout << "How fascinating!" << endl;
    
    return 0;
}
