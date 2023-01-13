// YP04_ex05.cpp
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
    CandyBar snak {
        "Mocha Munch",
        2.3,
        350
    };
    
    cout << snak.name << endl;
    cout << snak.weight << endl;
    cout << snak.energy << endl;
    
    return 0;
}
