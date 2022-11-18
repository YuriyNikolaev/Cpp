#include<iostream>
#define N 5 // строка
#define M 8 // столбец
using namespace std;

int arr[N][M] = {0};
// arr[строка][столбец]

int main()
{
    // числовая переменная
    int num = 1;
    int delta = 1;
    // цикл перебора строк и столбцов
   
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
        for(int l = N - 1; l >= 1; l--)
        {
            arr[l][0] = num;
            num++;
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
