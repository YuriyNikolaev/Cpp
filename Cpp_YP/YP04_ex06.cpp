// YP04_ex06.cpp
#include<iostream>
#include <string>

using namespace std;

struct CandyBar 
{
    string name;
    double weight;
    int energy = 0;
};


int main()
{
    CandyBar snak[3];
    
    cout << "snak[0] \n";
    cout << "Введите название : ";
    cin >>  snak[0].name;

    cout << "Введите вес в кг: ";
    cin >>  snak[0].weight;

    cout << "Введите каллорийность: ";
    cin >>  snak[0].energy;

    cout << "название " << snak[0].name << endl;
    cout << "вес " << snak[0].weight << endl;
    cout << "каллорийность " << snak[0].energy << endl;
    
    return 0;
}
