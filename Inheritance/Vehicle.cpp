#include "Vehicle.h"
#include <iostream>

void Vehicle::setManufacturer(string m) { manufacturer = m; }
void Vehicle::setYearBuilt(int y) { yearBuilt = y; }
void Vehicle::displayInfo() { cout << "\nManufacturer: " << manufacturer << "\nYear Built: " << yearBuilt << "\n\n"; }