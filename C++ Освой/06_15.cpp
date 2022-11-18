// 06_15.cpp вложенные циклы для обхода двумерного массива
#include<iostream>
using namespace std;

int main()
{
    const int NUM_ROWS = 3;
    const int NUM_COLS = 4;
    
    // Двумерный массив целых чисел
    int myNums[NUM_ROWS][NUM_COLS] = {{ 34, -1, 879, 22},
                                      { 24, 365, -101, -1},
                                      {-20, 40, 90, 97}};
    
    // Обход всех строк массива
    for(int row = 0; row < NUM_ROWS; ++ row)
    {
        //Обход каждоый строки (по столбцам)
        for(int column = 0; column < NUM_COLS; ++column)
        {
            cout << "Integer[" << row << "][" << column
                 << "] = " << myNums[row][column] << endl;
        }
    }
    
    return 0;
}
