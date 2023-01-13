// YP04_17.cpp -- use_new.cpp -- использование операции new
#include<iostream>

int main()
{
    using namespace std;
    
    int nights = 1001;
    int * pt = new int; // выделение пространства для int
    *pt = 1001;         // сохранение в нем значения
    
    cout << "nights value = ";                           // значение nights
    cout << nights << ": location " << &nights << endl;  // расположение nights
    cout << "int ";                                      // значение и расположение int
    
    cout << "value = " << *pt << ": location = " << pt << endl;
    
    double * pd = new double;       // выделение пространства double
    *pd = 10000001.0;               // сохранение в нем значения double
    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
        // значение расположение double
    cout << "location pointer pd: " << &pd << endl;
        // расположение указателя pd
    cout << "size of pt = " << sizeof(pt);               // размер pt
    cout << ": size of *pt = " << sizeof(*pt) << endl;   // размер *pt
    cout << "size of pd = " << sizeof(pd);               // размер pd
    cout << ": size of *pd = " << sizeof(*pd) << endl;   // размер *pd
    
    return 0;
}
