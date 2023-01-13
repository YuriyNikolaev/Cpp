// YP02_dz2.cpp convert
// перевод 1 английского стоуна в 1 английский фунт
#include<iostream>
using namespace std;

int FurlongToYards(int);

int main()
{
    cout << "Перевод фарлонгов в ярды" << endl;
    
    char userSelection = 'm';
         
    while(userSelection != 'x')
    {
        int furlong = 0;
        cout << "Введите число фарлонгов: ";
        cin >> furlong;
        
        int yard = FurlongToYards(furlong);
        
        cout << "В " << furlong << " фарлонгах " 
         << yard << " ярдов." << endl;
        
        cout << "'x' для выхода, иное для повтора" << endl;
        cin >> userSelection;
        
    }
    
    cout << "До свидания!" << endl;
    
    return 0;
}

int FurlongToYards(int n)
{
    return n * 220;
}

