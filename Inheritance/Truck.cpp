#include "Truck.h"

void Truck::setTowingCapacity(int tc) { towingCapacity = tc; }
void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << "\nTowing capacity: " << towingCapacity;
}