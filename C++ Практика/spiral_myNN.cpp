#include<iostream>
#define N 9
using namespace std;

int arr[N][N] = {0};


int main()
{
    // числовая переменная
    int num = 1;
    
    
    for (int delta = 0; delta < N - 2; delta++ )
    {
            //верхняя строка
        for(int k = 0 + delta; k < N - delta; k++)
        {
            arr[0 + delta][k] = num;
            num++;
        }
        num--;
        
        // правый столбец
        for(int l = 0 + delta; l < N - delta; l++)
        {
            arr[l][N - 1 - delta] = num;
            num++;
        }
        num--;
            
        // нижняя строка
        for(int k = N - 1 - delta; k >= 0 + delta; k--)
        {
            arr[N - 1 - delta][k] = num;
            num++;
        }
        num--;
        
        // первый столбец
        for(int l = N - 1 - delta; l >= 1 + delta; l--)
        {
            arr[l][0 + delta] = num;
            num++;
        }    
    }
    
    
    
    
    // нули
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            
            printf("%3d", arr[i][j]);
        }
        cout << endl;
    }
    
    return 0;
}
