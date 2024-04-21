#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : public Vehicle {
private:
	int towingCapacity;
public:
	Truck(string m, int y, int tc) : Vehicle(m, y) { towingCapacity = tc; }
	int getTowingCapacity() const { return towingCapacity; }
	void setTowingCapacity(int);
	void displayInfo();
};
#endif