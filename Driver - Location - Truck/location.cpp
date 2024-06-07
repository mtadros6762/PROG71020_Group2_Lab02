#include "location.h"

//madisont, adilf, armaanm - prog71020 - lab02 - location class implementation

//See Lab 2 document for the formulae to calculate the distance between two
//locations.

//DEFAULT CONSTRUCTOR
location::location() : latitude(0), longitude(0) {}

//SETTERS
void location::Set_Longitude() {
	cout << "Enter the Longitude: ";
	
	while (!(cin >> longitude)) {
		cin >> longitude;

		if (!(cin >> longitude)) {
			cout << "Invalid input. Enter a valid float for longitude: ";
			cin.clear(); //Clearing fail flag
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard the line
		}
	}
}
void location::Set_Latitude() {
	cout << "Coordinates for Truck location" << endl;
	cout << "Enter the Latitude: ";
	
	while (!(cin >> latitude)) {
		cin >> latitude;

		if (!(cin >> latitude)) {
			cout << "Invalid input. Enter a valid float for latitude: ";
			cin.clear(); //Clearing fail flag
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard the line
		}
	}
	
}

//GETTERS
float location::Get_Longitude() {
	return longitude;
}
float location::Get_Latitude() {
	return latitude;
}