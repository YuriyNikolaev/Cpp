// YP04_06.cpp -- numstr.cpp -- строковый ввод после числового
#include <iostream>

int main()
{
    using namespace std;
    
    cout << "What year was your house built?\n"; // ввод года постройки дома
    int year;
    cin >> year;
    cin.get(); // или cin.get(ch); 
    // или (cin >> year).get();  или (cin >> year).get(ch);
    
    cout << "What is its street address?\n";  // ввод адреса
    char address[80];
    cin.getline(address, 80);
    
    cout << "Year built: " << year << endl;   // вывод года постройки
    cout << "Address: " << address << endl;   // вывод адреса
    cout << "Done!\n";

    return 0;
}