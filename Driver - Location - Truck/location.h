#pragma once

//madisont, adilf, armaanm - prog71020 - lab02 - location class interface

//REQUIREMENTS
//• Design and implement a Location class

#ifndef LOCATION_CLASS_H
#define LOCATION_CLASS_H

//LIBRARIES
#include <iostream>

using namespace std;

class location {
	
private:
	//DATA
	float latitude;/*latitude is x */
	float longitude;/*longitude is y*/
	
public:
	/*DEFAULT CONSTRUCTORS*/
	location();
	
	/*PARAM CONSTRUCTOR*/
	location(double xCoord, double yCoord) : latitude(xCoord), longitude(yCoord) {}

	/*MEMBER FUNCTIONS*/
	void Set_Longitude();
	void Set_Latitude();
	float Get_Longitude();
	float Get_Latitude();
};

#endif //LOCATION_CLASS_H