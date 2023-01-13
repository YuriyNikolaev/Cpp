// YP02_06.cpp convert
// перевод 1 английского стоуна в 1 английский фунт
#include<iostream>
using namespace std;

int stonetolb(int); // протопи функции

int main()
{
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    
    return 0;
}

int stonetolb(int sts)
{
    return 14 * sts;
}
