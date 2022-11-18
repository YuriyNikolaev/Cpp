#include <iostream>
#include <string>

using namespace std;

int main()
{
    int inputNumber;

    cout << "Введите целое число: ";

    cin >> inputNumber;

    cout << "Введите ваше имя";
    string inputName;
    cin >> inputName;

    cout << inputName << "Ввел" << inputNumber << endl;

    return 0;
}
