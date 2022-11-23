#include<iostream>
using namespace std;

int main()
{
    cout << "Введите число: ";
    int value = 0;
    cin >> value;
    
    value += 8;
    cout << "После +=8, value = " << value << endl;
    
    value -= 2;
    cout << "После -=2, value = " << value << endl;
    
    value /= 4;
    cout << "После /=4, value = " << value << endl;
    
    value *= 4;
    cout << "После *= 4, value = " << value << endl;
    
    value %= 1000;
    cout << "После %= 1000, value = " << value << endl;
    
    // Присваивание происходит в пределах cout
    cout << "Присваивание происходит в пределах cout" << endl;
    
    cout << "После <<= 1, value = " << (value <<= 1) << endl;
    cout << "После >>= 2, value = " << (value >>= 2) << endl;
    
    cout << "После |= 0x55, value = " << (value |= 0x55) << endl;
    cout << "После ^= 0x55, value = " << (value ^= 0x55) << endl;
    cout << "После &= 0x0F, value = " << (value &= 0x0F) << endl;
    
    return 0;
}
