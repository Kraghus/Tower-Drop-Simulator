// This program gets the height of a tower from the user and calculates
// the height of an object dropped from that tower. It then prints
// what the height would be at 0 through 5 seconds after being dropped.

#include "io.h"

int main()
{
	// calls function to ask user for the initial tower height
	const double towerHeight{ getTowerHeight() };

	// prints height of the object at 0 through 5 seconds	
	printHeight(towerHeight, 0, distanceFallen(towerHeight, 0));
	printHeight(towerHeight, 1, distanceFallen(towerHeight, 1));
	printHeight(towerHeight, 2, distanceFallen(towerHeight, 2));
	printHeight(towerHeight, 3, distanceFallen(towerHeight, 3));
	printHeight(towerHeight, 4, distanceFallen(towerHeight, 4));
	printHeight(towerHeight, 5, distanceFallen(towerHeight, 5));

	return 0;
}

// gravity = 9.8m/(s^2)
// distance fallen = gravity * ((x_seconds)^2)/2