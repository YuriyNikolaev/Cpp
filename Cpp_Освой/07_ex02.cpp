// 07_ex02.cpp написать функцию, которая получает массив типа double

#include<iostream>

using namespace std;

void DisplayArray(double numbers[], int length)
{
    for(int i = 0; i < length; ++i)
        cout << numbers[i] << " " << endl;
        
    cout << endl;
}


int main()
{
    double myNums[4] = {24.5, 58.6, -1, 245};
    DisplayArray(myNums, 4);
    
    return 0;
}
