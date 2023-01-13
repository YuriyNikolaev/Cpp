// YP04_ex02.cpp -- чтение более одного слова с помощью cin.getline()
#include <iostream>
#include <string>

int main()
{
    using namespace std;
  
    string name;
    string dessert;
    
    cout << "Enter your name:\n";   // запрос имени
    cin >> name;      // читать до символа новой строки
    
    cout << "Enter your favorite dessert:\n";  // запрос любимого десерта
    cin >> dessert;
    
    cout<< "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}