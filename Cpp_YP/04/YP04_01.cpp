// YP04_01.cpp -- arrayone.cpp -- небольшие массивы целых чисел
#include <iostream>

int main()
{
  using namespace std;

  int yams[3]; // создание массива из трех элементов
  yams[0] = 7; // присваивание значения первому элементу
  yams[1] = 8;
  yams[2] = 6;

  int yamcosts[3] = {20, 30, 5}; // создание и инициализация массива
  // Примечание. Если ваш компилятор С++ не может инициализировать
  // этот массив, используйте static int yamcosts[3] вместо int yamcosts[3]

  cout << "Total yams = ";
  cout << yams[0] + yams[1] + yams[2] << endl;   // cложение элементов массива
  cout << "The packeges with " << yams[1] << " yams costs ";
  cout << yamcosts[1] << " cents per yam.\n";    // вывод элемента массива

  // арифметические операции с элементами разных массивов
  int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];    
  total = total + yams[2] * yamcosts[2];
  cout << "The total yam expens is " << total << " cents.\n";

  cout << "\nSize of yams array = " << sizeof yams;  // вывод размера в байтах массива yams
  cout << " bytes. \n";
  cout << "Size of one element = " << sizeof yams[0];  // вывод размера в байтах 0го элемента массива yams
  cout << " bytes.\n";

  return 0;
}