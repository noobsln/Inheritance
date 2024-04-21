#ifndef VEHICLE_H
#define VEHICLE_H
#include<string>
using namespace std;

class Vehicle {
private:
	string manufacturer;
	int yearBuilt;
public:
	Vehicle(string m, int y) {
		manufacturer = m;
		yearBuilt = y;
	}
	string getManufacturer() const { return manufacturer; }
	int getYearBuilt() const { return yearBuilt; }
	void setManufacturer(string);
	void setYearBuilt(int);
	void displayInfo();
};
#endif