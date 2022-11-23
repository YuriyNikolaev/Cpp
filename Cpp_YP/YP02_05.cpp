// YP02_05.cpp oufrunc
#include<iostream>
using namespace std;

void simon(int); // протоип ф simon()

int main()
{
    simon(3);  // вызов функции simon()
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    
    simon(count); // еще один вызов функции
    cout << "Done!" << endl;
    
    return 0;
}

void simon(int n)
{
    using namespace std;
    cout << "Simon says touch your toes " << n << " times." << endl;
} // функции с void не требуют операторов