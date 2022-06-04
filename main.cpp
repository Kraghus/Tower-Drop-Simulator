// This program gets the height of a tower from the user and calculates
// the height of an object dropped from that tower. It then prints
// what the height would be for every second until it reaches the ground.

#include <iostream>
#include "io.h"

int main()
{
	// calls a function to ask the user for the initial tower height
	double towerHeight{ getTowerHeight() };

	// calls a function to print the height of the object until it reaches the ground
	printHeight(towerHeight);

	// stops the program from closing automatically after printing
	system("pause");
	std::cout << " ";

	return 0;
}