#pragma once
#include"location.h"
#include"driver.h"
#include<string>
//madisont, adilf, armaanm - prog71020 - lab02 - truck class interface

//REQUIREMENTS
//• Design and implement a Truck class which includes the driver and location
//as attributes.

#ifndef TRUCK_CLASS_H
#define TRUCK_CLASS_H

//LIBRARIES & MACROS
#include <iostream>

//CLASS AND FUNCTIONS
class truck {
private:
	
	int TruckID;
	location Location;
	driver Driver;
	int accessCard;
	//DATA
public:

	truck(): TruckID(0),Location(0,0),accessCard(0) {}

	/*Setter Functions*/
	void setDriver(driver d) {
		Driver = d;
	}
	void setLocation(location l) {
		Location = l;
	}
	float getLongitude() {
		return Location.Get_Lonitude();
	}
	float getLatitude() {
		return Location.Get_Latitude();
	}

	void SetTruckID(int id) {
		TruckID = id;
	}
	void setAccessCard(int cardID) {
		accessCard = cardID;
	}
	bool hasAccess(int cardID) {
		return accessCard == cardID;
	}

	int Get_TruckID() {
		return TruckID;
	}
	location getLocation()  {
		return Location;
	}
	double distanceFrom(truck& otherTruck) {
		double distance = sqrt(pow(Location.Get_Latitude() - otherTruck.Location.Get_Latitude(), 2) + pow(Location.Get_Lonitude() - otherTruck.Location.Get_Lonitude(), 2));
		return distance;
	}
	double distanceFromOrigin() {
		location origin(0, 0);
		double distance = sqrt(pow(Location.Get_Latitude() - origin.Get_Latitude(), 2) + pow(Location.Get_Lonitude() - origin.Get_Lonitude(), 2));
		return distance;
	}



	
};
void Save_to_File(driver drv, truck trk);


#endif //TRUCK_CLASS_H