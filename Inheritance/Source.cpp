#include "Car.h"
#include "Truck.h"

int validate(int input) {
	while (!(cin >> input) && cin.fail()) {
		cin.clear();
		cin.ignore(99999, '\n');
		cout << "Error! Please a enter valid number: ";
	}
	cin.clear();
	cin.ignore(99999, '\n');
	return input;
}