#include "io.h"
#include <iostream>

double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}

double distanceFallen(double towerHeight, double seconds)
{
	constexpr double gravity{ 9.8 };
	double distanceFallen{ (gravity * (seconds * seconds) / 2) };
	return distanceFallen;
}

void printHeight(double towerHeight, double seconds, double distanceFallen)
{
	if (towerHeight - distanceFallen <= 0)
		std::cout << "At " << seconds << " second(s), the object is on the ground.\n";
	else
		std::cout << "At " << seconds << " second(s), the object is at height: " <<
		(towerHeight - distanceFallen) << " meters.\n";

}