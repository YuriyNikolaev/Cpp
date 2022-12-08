// YP04_ex01.cpp

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // Name: Yewe, Betty Sue
	// Введите первое имя
	const int Size = 20;
	char name1[Size];
	cout << "What is your first name? ";
	cin.getline(name1, 20);
	cout << "your first name: " << name1 << endl;
	 
	// Введите второе имя
	cout << "What is your second name? ";
	char name2[Size];
	cin.getline(name2, 20);
	cout << "your second name: " << name2 << endl;

	// Какую букву оценки вы заслуживаете?
    cout << "What is your Grade? A, B, C?";
    char grade[3];
    cin >> grade;
    
    // Каков ваш возраст?
    int age = 0;
    cout << "How old are you?";
    cin >> age;

	// Вывод:
	// Name: Yewe, Betty Sue
    cout << "Name: " << name2 << ", " << name1 << endl;
    // Grade: C
    cout << "grade: " << grade << endl;
	// Age: 22
    cout << "Age: " << age << endl;



	return 0;
}
