#include <iostream>

double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}

int main()
{
	double towerHeight{ getTowerHeight() };


	return 0;
}