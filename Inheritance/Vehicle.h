#ifndef VEHICLE_H
#define VEHICLE_H
#include<string>
using namespace std;

class Vehicle {
private:
	string manufacturer;
	int yearBuilt;
public:
	Vehicle(string, int);
	string getManufacturer() const;
	int getYearBuilt() const;
	void setManufacturer(string);
	void setYearBuilt(int);
	void displayInfo();
};
#endif