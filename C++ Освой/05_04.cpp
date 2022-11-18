#include <iostream>
using namespace std;

int main()
{
   cout << "Введите true(1) или false(0) "
           "для двух операндов:";
           
    bool Op1 = false, Op2 = false;
    cin >> Op1;
    cin >> Op2;
    cout << Op1 << " И " << Op2 << " = " << (Op1 && Op2) << endl;
    
    cout << Op1 << " ИЛИ " << Op2 << " = " << (Op1 || Op2) << endl;
 
    return 0;
}
