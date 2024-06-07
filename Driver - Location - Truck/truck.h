#pragma once

//madisont, adilf, armaanm - prog71020 - lab02 - truck class interface

//REQUIREMENTS
//• Design and implement a Truck class which includes the driver and location
//as attributes.

#ifndef TRUCK_CLASS_H
#define TRUCK_CLASS_H

//LIBRARIES & MACROS
#include <iostream>
#include <string>
#include <fstream>
#include "location.h"
#include "driver.h"

//CLASS AND FUNCTIONS
class truck {
private:
	//DATA
	int TruckID;
	location Location;
	driver Driver;
	int accessCard;
	
public:
	/*DEFAULT CONSTRUCTOR*/
	truck();

	/*SETTER FUNCTIONS*/
	void setDriver(driver d);
	void setLocation(location l);
	float getLongitude();
	float getLatitude();
	void SetTruckID(int id);
	void setAccessCard(int cardID);
	bool hasAccess(int cardID);
	
	/*GETTER FUNCTIONS*/
	int Get_TruckID();
	location getLocation();
	double distanceFrom(truck& otherTruck);
	double distanceFromOrigin();
};

//FILE OPERATION FUNCTIONS
void Save_to_File(driver drv, truck trk);
void Read_from_File(truck trk);

#endif //TRUCK_CLASS_H