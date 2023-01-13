// YP03_13.cpp -- изменения типа при инициализации
#include <iostream>

int main()
{
   using namespace std;
   cout.setf(ios_base::fixed, ios_base::floatfield);
   float tree = 3;      // int преобразован во float
   int guess = 3.9832l; // float преобразован в int
   int debt = 7.2E12;   // результат не определен в С++
   
   cout << "tree = " << tree << endl;
   cout << "guess = " << guess << endl;
   cout << "debt = " << debt << end;
   
    return 0;
}
