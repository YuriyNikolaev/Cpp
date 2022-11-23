#include <iostream>
using namespace std;

int main()
{
    cout << "Введите 0 или 1 для ответа на вопрос" << endl;
    cout << "Есть ли скидка на автомобиль? ";
    bool onDiscount = false;
    cin >> onDiscount;
    
    cout << "Вы получили премию? ";
    bool fantasticBonus = false;
    cin >> fantasticBonus;
    
    if (onDiscount || fantasticBonus)
        cout << "Вы можете купить автомобиль!" << endl;
    else
        cout << "Покупку придется отложить..." << endl;
        
    if (!onDiscount)
        cout << "Скидки на автомобиль нет" << endl;
    
    
    return 0;
}