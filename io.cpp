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

// calculates distance fallen and subtracts it from the user input (towerHeight) to
// calculate the height of the object at the given second
// checks to see if the ball has fallen the entire distance of the tower, and if so,
// prints that it's on the ground
// if the object is not on the ground, prints what the height is at the given second
void printHeight(double towerHeight)
{
	double distanceFallen{};
		for (int seconds{}; ; ++seconds)
	{
		// calculates distance fallen with gravity constant
		constexpr double gravity{ 9.8 };
		double distanceFallen{ (gravity * (seconds * seconds) / 2) };

		if (towerHeight - distanceFallen <= 0)
		{
			std::cout << "At " << seconds << " second(s), the object is on the ground.\n";
			break;
		}
		else
		{
			std::cout << "At " << seconds << " second(s), the object is at height: " <<
				(towerHeight - distanceFallen) << " meters.\n";
		}
	}

}