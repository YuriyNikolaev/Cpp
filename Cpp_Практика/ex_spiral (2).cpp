// программа должная рисовать спираль в матрице N x N
#include <iostream>
#define N 8 // задает число рядов и столбцов

using namespace std;

int arr[N][N] = {0};

int main()
{
    int num = 1;
    int delta = 1;
    
    for(int delta = 0; delta < N - 2; ++delta)
    {
        // первый ряд
        for(int i = 0 + delta; i < N - delta; ++i)
        {
            arr[0 + delta][i] = num;
            num++;
        }
        num--;
        // последний столбец
        for(int j = 0 + delta; j < N  - delta; ++j)
        {
            arr[j][N - 1 - delta] = num;   
            num++;
        }
        num--;
         // последний ряд
        for(int i = N - 1 - delta; i >= 0 + delta; --i)
        {
            arr[N - 1 - delta][i] = num;
            num++;
        }
        num--;
         // первый столбец
        for(int j = N - 1 - delta; j >= 1 + delta; --j)
        {
            arr[j][0 + delta] = num;
            num++;
        } 
    }
    
    // выводит нули
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            // cout << arr[i][j] << "  ";
            printf("%3d", arr[i][j]);
        }
        cout << endl;       
    }
    return 0;
}
