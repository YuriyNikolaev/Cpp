// YP03_ex05.cpp -- популяция людей в мире и в США
// не совсем понял, что сделать. по итогу выводятся нули
// нужно что-то сделать с преобразованием типов при делении


#include<iostream>
using namespace std;

int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    
    long long worldPop = 7'000'000'000;
    cout << "the world's population: " << worldPop << endl;
   
    long long usaPop = 310'000'000;
    cout << "the population of the US: " << usaPop << endl;
    
    
    long double percentOfUSA = usaPop / worldPop * 100;
    
    cout << "The population of the US is " << percentOfUSA << "\% of the world population" ;
    
    


    return 0;
}
