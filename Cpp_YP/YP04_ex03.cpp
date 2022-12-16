// YP04_ex03.cpp
#include<iostream>
#include <cstring>

using namespace std;

int main()
{
    char firstName[20];
    char secondName[20];
    
    cout << "Enter your first name: \n";
    cin.getline(firstName, 20);
    
    cout << "Enter your second name: \n";
    cin.getline(secondName, 20);
    
    cout << "Here'x the information in s single string: " 
         << secondName << ", " << firstName << endl;
    
    
    return 0;
}
