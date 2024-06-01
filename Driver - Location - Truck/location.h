#pragma once

//madisont, adilf, armaanm - prog71020 - lab02 - location class interface

//REQUIREMENTS
//• Design and implement a Location class

#ifndef LOCATION_CLASS_H
#define LOCATION_CLASS_H


#include <iostream>

using namespace std;

class location {
	
private:
	/*Data_Coordinates*/
	float latitude;/*latitude is x */
	float longitude;/*longitude is y*/
	
public:
	/*Default Constructor*/
	location() : latitude(0), longitude(0) {}

	location(double xCoord, double yCoord) : latitude(xCoord), longitude(yCoord) {}

	void Set_Longitude() {
		cout << "Enter the Longitude " << endl;
		cin >> longitude;
	}
	void Set_Latitude() {
		cout << "Enter the Latitude " << endl;
		cin >> latitude;
	}

	float Get_Lonitude() {
		return longitude;
	}
	float Get_Latitude() {
		return latitude;
	}
};

#endif //LOCATION_CLASS_H