#include <iostream>
using namespace std;

int main()
{
    cout << "Введите 0 или 1 для ответа на вопрос" << endl;
    cout << "Идет ли дождь? ";
    bool isRaining = false;
    cin >> isRaining;
    
    cout << "На улице есть автобус? ";
    bool busesPly = false;
    cin >> busesPly;
    
    // Условный оператор использует операторы && и || !
    if (isRaining && !busesPly)
        cout << "Вы не попадете на работу" << endl;
    else
        cout << "Вы попадете на работу" << endl;
    
    if (isRaining && busesPly)
        cout << "Возьмите зонтик" << endl;
        
    if (!isRaining && busesPly)
        cout << "Приятного дня и хорошей погоды" << endl; 
    
    
    return 0;
}
