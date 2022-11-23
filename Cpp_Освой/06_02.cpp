#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
    cout << "Введите строку текста: " << endl;
    string userInput;
    getline(cin, userInput);
    
    char copyInput[20] = { '\0' };
    if (userInput.length() < 20)
    { 
        strcpy(copyInput, userInput.c_str());
        cout << "copyInput содержит: " << copyInput << endl;
    }
    else
        cout << "Превышение размера строки!" << endl;
        
    
    return 0;
}