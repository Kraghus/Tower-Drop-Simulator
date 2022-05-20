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
	constexpr double gravity { 9.8 };
	double distanceFallen{ (gravity * (seconds * seconds) / 2) };
	return distanceFallen;
}

void printHeight(double towerHeight, double seconds, double distanceFallen)
{
	if (towerHeight - distanceFallen <= 0)
		std::cout << "At " << seconds << " seconds, the object is on the ground.\n";
	else
		std::cout << "At " << seconds << " seconds, the object is at height: " <<
		             (towerHeight - distanceFallen) << " meters.\n";

}

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