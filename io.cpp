#include "io.h"
#include <iostream>

// asks the user what the height of the tower is and returns it back to main
double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}

// takes in user input (towerHeight) and seconds to calculate how far the object has fallen
// the gravity constant being used is 9.8m/s^2
// the calculation for distance fallen is gravity * ((x_seconds)^2)/2
double distanceFallen(double towerHeight, double seconds)
{
	constexpr double gravity{ 9.8 };
	double distanceFallen{ (gravity * (seconds * seconds) / 2) };
	return distanceFallen;
}

// takes in the distance fallen and subtracts it from the user input (towerHeight) to
// calculate the height of the object at the given second
// checks to see if the ball has fallen the entire distance of the tower, and if so,
// prints that it's on the ground
// if the object is not on the ground, prints what the height is at the given second
void printHeight(double towerHeight, double seconds, double distanceFallen)
{
	if (towerHeight - distanceFallen <= 0)
		std::cout << "At " << seconds << " second(s), the object is on the ground.\n";
	else
		std::cout << "At " << seconds << " second(s), the object is at height: " <<
		(towerHeight - distanceFallen) << " meters.\n";

}