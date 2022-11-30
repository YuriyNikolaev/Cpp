#include <iostream>
#include <array>

using namespace std;


int main()
{

  double ted;

  double * p_ted = &ted;

  *p_ted = 2.0;

  cout << "*p_ted" << *p_ted;


  return 0;
}