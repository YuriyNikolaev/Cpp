#include <iostream>
using namespace std;

int main()
{
    int startValue = 101;
    cout << "Начальное значение: " << startValue << endl;
    
    int postfixIncrement = startValue++;
    cout << "Постфиксный ++ = " << postfixIncrement << endl;
    cout << "После постфиксного ++ startValue =" << startValue << endl;
    
    startValue = 101;
    int prefixIncrement = ++startValue;
    cout << "Префиксный ++ =" << prefixIncrement << endl;
    cout << "После префиксного ++ startValue =" << startValue << endl;
    
    startValue = 101;
    int postfixDecrement = startValue--;
    cout << "Постфиксный -- =" << postfixDecrement << endl;
    cout << "После постфиксного -- startValue =" << startValue << endl;
    
    startValue = 101;
    int prefixDecrement = -- startValue;
    cout << "Префиксный -- =" << prefixDecrement << endl;
    cout << "После префиксного -- startValue =" << startValue << endl;
    
    return 0;
}
