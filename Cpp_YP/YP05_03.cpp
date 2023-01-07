// YP05_02.cpp -- express.cpp -- значения выражений
#include <iostream>

int main()
{
  using namespace std;
  int x;
  cout << "The expression x = 100 has thу value "; // ввод значения выражения х = 100
  cout << (x = 100) << endl;
  cout << "Now x = " << x << endl;

  cout << "The expression x < 3 has the value "; // ввод значения выражения х < 3
  cout << (x < 3) << endl;

  cout << "The expression x > 3 has the value "; // ввод значения выражения х > 3
  cout << (x > 3) << endl;

  cout.setf(ios_base::boolalpha); // новое средство С++

  cout << "The expression x < 3 has the value "; // ввод значения выражения х < 3
  cout << (x < 3) << endl;

  cout << "The expression x > 3 has the value "; // ввод значения выражения х > 3
  cout << (x > 3) << endl;

  return 0;
}