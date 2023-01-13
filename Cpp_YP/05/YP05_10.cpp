// YP05_10.cpp -- equal.cpp -- равенство или присваивание
#include<iostream>

int main()
{
    using namespace std;
    int quizscore[10] = { 20, 20, 20, 20, 20, 19, 20, 18, 20, 20 };
    cout << "Doing it right:\n";
    
    int i;
    for(i = 0; quizscore[i] == 20; i++)
        cout << "quiz " << i << " is a 20\n";
    // предупреждение: возможно, лучше почитать об этой программе,
    // чем запускать ее.
    cout << "Doing it dangerously wrong:\n";
    for(i = 0; quizscore[i] = 20; i++)
        cout << "quiz " << i << " is a 20\n"; 
       
    return 0;
}
