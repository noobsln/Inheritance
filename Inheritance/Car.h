#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle {
private:
	int numDoors;
public:
	Car(string m, int y, int n) : Vehicle(m, y) { numDoors = n; }
	int getNumDoors() const { return numDoors; }
	void setNumDoors(int);
	void displayInfo();
};
#endif