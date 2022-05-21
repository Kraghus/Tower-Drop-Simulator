// declares functions used within the program
// uses header guards to avoid naming conflicts

#ifndef IO_H
#define IO_H

double getTowerHeight();
double distanceFallen(double towerHeight, double seconds);
void printHeight(double towerHeight, double seconds, double distanceFallen);

#endif