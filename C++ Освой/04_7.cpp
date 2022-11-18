#include <iostream>
#include <string>

using namespace std;

int main()
{
    string greenString("Hello std:: string!");
    cout << greenString << endl;
    
    cout << "Введите текстовую строку: " << endl;
    string firstLine;
    getline(cin, firstLine);
    
    cout << "Введите другую строку: " << endl;
    string secondLine;
    getline(cin, secondLine);
    
    cout << "Результирующая конкатенация: " << endl;
    string concatString = firstLine + " " + secondLine;
    cout << concatString << endl;
    
    cout << "Копия полученной строки: " << endl;
    string aCopy;
    aCopy = concatString;
    cout << aCopy << endl;
    
    cout << "Длина строки: " << concatString.length() << endl;
    
    return 0;
}