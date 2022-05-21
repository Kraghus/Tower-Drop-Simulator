#include <iostream>

double getTowerHeight();
double distanceFallen(double towerHeight, double seconds);
void printHeight(double towerHeight, double seconds, double distanceFallen);

int main()
{
	double towerHeight{ getTowerHeight() };
	
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