// YP05_02.cpp -- num_test.cpp -- использование числовой проверки в цикле

#include <iostream>

int main()
{
  using namespace std;

  cout << "Enter the strating countdown value: "; // ввод начального значения счетчика
  int limit;
  cin >> limit;
  int i;
  for (i = limit; i; i--) // завершается, когда i = 0
    cout << "i = " << i << "\n";
  cout << "Done now that i = " << i << "\n"; // цикл завершен, вывод i

  return 0;
}