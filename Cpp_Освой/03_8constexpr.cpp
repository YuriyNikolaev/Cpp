// 3_8constexpr.cpp

#include <iostream>
constexpr double GetPi() { return 3.141593; }
constexpr double TwicePi() { return 2 * GetPi(); }

int main()
{
	using namespace std;
	const double pi = 3.141593;

	cout << "Константа pi равна " << pi << endl;
	cout << "constexpr GetPi() возвращает " << GetPi() << endl;
	cout << "constexpr TwicePi() возвращает " << TwicePi() << endl;

	return 0;
}




// enum RainbowColors
// {
// 	Violet = 0,
// 	Indigo,
// 	Blue,
// 	Green,
// 	Yellow,
// 	Orange,
// 	Red
// };

// RainbowColors MyWorldsColor = Blue;

// enum CardinalDirections
// {
// 	North,
// 	South,
// 	East,
// 	West
// };