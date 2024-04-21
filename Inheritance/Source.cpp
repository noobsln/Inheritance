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

int main() {
	string manu;
	int year = 0, doors = 0, towcap = 0;
	for (int i = 0; i < 3; i++) {
		cout << "Enter manufacturer: ";
		getline(cin, manu);
		cout << "Enter year: ";
		year = validate(year);
		if (i == 0) {
			Vehicle v(manu, year);
			v.displayInfo();
		}
		else if (i == 1) {
			cout << "Enter num doors: ";
			doors = validate(doors);
			Car c(manu, year, doors);
			c.displayInfo();
		}
		else {
			cout << "Enter towing capacity: ";
			towcap = validate(towcap);
			Truck t(manu, year, towcap);
			t.displayInfo();
		}
		cout << "\n\n";
	}
	getchar();
	return 0;
}