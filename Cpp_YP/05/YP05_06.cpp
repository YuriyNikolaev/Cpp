// YP05_06.cpp -- forstr1.cpp -- использованеи цикла for для строки
#include<iostream>
#include <string>

int main()
{
    using namespace std;
    cout << "enter a word: ";
    string word;
    cin >> word;
    // отображение символов в обратном порядке
    for (int i = word.size() - 1; i >= 0; i--)
        cout << word[i];
    cout << "\nBye.\n";
    
    return 0;
}
