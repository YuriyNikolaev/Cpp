// YP04_03.cpp -- чтение более одной строки
#include <iostream>

int main()
{
    using namespace std;
  
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    
    cout << "Enter your name:\n";   // запрос имени
    cin >> name;
    cout << "Enter your favorite dessert:\n";  // запрос любимого десерта
    cin >> dessert;  // пропускает запрос и сразу выводит I have some delicious
    cout<< "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}