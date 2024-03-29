// YP05_20.cpp -- nested.cpp -- вложенные циклы и двумерный массив
// 1 внешний цикл идет по столбцам, внутренний по строкам
// 2 используется инициализация массива указателей набором строковых констант

#include<iostream>
const int Cities = 5;
const int Years = 4;

int main()
{
    using namespace std;
    const char * cities[Cities] =  // массив указателей на 5 строк
    {
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "Gribble Vista"
    };
    int maxtemps[Years][Cities] = // двумерный массив
    {
        {96, 100, 87, 101, 105},  // значение для maxtemps[0]
        {96, 98, 91, 107, 104},   // значение для maxtemps[1]
        {97, 101, 93, 108, 107},  // значение для maxtemps[2]
        {98, 103, 95, 109, 108}   // значение для maxtemps[3]
    };
    
    cout << "Maximum temperatures for 2008 - 2011\n\n";
        // маскимальные температуры в 2008 - 2011 гг.
    for (int city = 0; city < Cities; ++city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year)
            cout << maxtemps[year][city] << "\t";
        cout << endl;
    }
    // cin.get();
    
    return 0;
}
