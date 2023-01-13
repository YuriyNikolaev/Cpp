// YP03_07.cpp -- перевод расхода из европейского стиля в американский

#include <iostream>
using namespace std;

int main()
{
  const double litrsIn1Gallon = 3.875;
  const double milesIn100km = 62.14;

  cout << "Перевод расхода из литров на 100 км, в мили на 1 галлон" << endl;

  double gazolinPer100km = 12.4;
  cout << "Введите расход в литрах на 100 км: ";
  cin >> gazolinPer100km;

  // перевод литров в галлоны
  double gallonsInLitrs = gazolinPer100km / litrsIn1Gallon;

  // расчет миль на 1 галлон
  double milesPerGallons = milesIn100km / gallonsInLitrs;

  // cout << "gallonsInLitrs  = " << gallonsInLitrs << endl;
  // cout << "milesPerGallons = " << milesPerGallons << endl;

  cout << gazolinPer100km << " литров на 100 км, соответствуют "
       << milesPerGallons << " миль на 1 галлон";

  return 0;
}