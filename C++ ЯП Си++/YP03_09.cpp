// YP03_09.cpp fltadd -- потеря точности при работе с float
#include <iostream>

int main()
{
    using namespace std;
   float a = 2.34E+22f;
   float b = a + 1.0f;
   
   cout << "a = " << a << endl;
   cout << "b - a = " << b- a << endl;
    
    return 0;
}
