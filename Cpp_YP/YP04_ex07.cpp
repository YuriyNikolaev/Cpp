// YP04_ex07.cpp
#include<iostream>
#include <string>

using namespace std;


struct pizzaFirm 
{
	string companyName;
	int diam;
	double weight;
};


int main()
{
	pizzaFirm flame;
	
	cout << "Enter company name: \n";
	cin >> flame.companyName;
	
	cout << "Enter diametr of pizza in cm: \n";
	cin >> flame.diam;
	
	cout << "Enter weight of pizza in kg: \n";
	cin >> flame.weight;

    
    cout << "company name: "    << flame.companyName << endl; 
    cout << "diametr of pizza " << flame.diam << endl;
    cout << "weight of pizza "  << flame.weight << endl;

	return 0;
}