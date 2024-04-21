#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(string m, int y) {
	manufacturer = m;
	yearBuilt = y;
}
string Vehicle::getManufacturer() const { return manufacturer; }
int Vehicle::getYearBuilt() const { return yearBuilt; }
void Vehicle::setManufacturer(string m) { manufacturer = m; }
void Vehicle::setYearBuilt(int y) { yearBuilt = y; }
void Vehicle::displayInfo() { cout << "\nManufacturer: " << manufacturer << "\nYear Built: " << yearBuilt << "\n\n"; }