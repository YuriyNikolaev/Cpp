#include <iostream>

using namespace std;
int main()
{
    cout << "Введите два числа: " << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;
    
    int max = (num1 > num2) ? num1 : num2;
    cout << "Болбшее из " << num1 << " и " \
         << num2 << " равно: " << max << endl;
    
    return 0;
}