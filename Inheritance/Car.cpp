#include "Car.h"

void Car::setNumDoors(int n) { numDoors = n; }
void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "\nNumber of Doors: " << numDoors;
}