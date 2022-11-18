#include<iostream>
#define N 8 // строка
#define M 5 // столбец
using namespace std;

int arr[N][M] = {0};
// arr[строка][столбец]

int main()
{
    // числовая переменная
    int num = 1;
    
    
    // цикл перебора строк и столбцов
    for(int delta = 0; delta < N - 2; delta++)
    {
        //верхняя строка 
        // arr[строка][столбец]
        for(int k = 0 + delta; k < M - delta; k++)
        {
            arr[0 + delta][k] = num;
            num++;
        }
        num--;
        
        // правый столбец, перебираем строки
        // arr[строка][столбец]
        for(int l = 0 + delta; l < N - delta; l++)
        {
            arr[l][M - 1 - delta] = num;
            num++;
        }
        num--;
        
        // нижняя строка
        // arr[строка][столбец]
        for(int k = M - 1 - delta; k >= 0 + delta; k--)
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
        for(int j = 0; j < M; j++) {
            
            printf("%3d", arr[i][j]);
        }
        cout << endl;
    }
    
    return 0;
}
