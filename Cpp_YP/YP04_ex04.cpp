// YP04_ex04.cpp
#include<iostream>
#include <string>

using namespace std;

int main()
{
    string firstName;
    string secondName;
    
    cout << "Enter your first name: \n";
    getline(cin, firstName);
    
    cout << "Enter your second name: \n";
    getline(cin, secondName);
    
    cout << "Here'x the information in s single string: " 
         << secondName << ", " << firstName << endl;
    
    
    return 0;
}
