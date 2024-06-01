#include "driver.h"
#include "location.h"
#include "truck.h"
#include<fstream>
#include<deque>
#include <iostream>
#include <cmath>
#define EXIT_SUCCESS 0
//madisont, adilf, armaanm - prog71020 - lab02 - source code implementation

//REQUIREMENTS
//Imagine that we have three drivers who take turns in driving two trucks. If
//a driver wants to drive one of the trucks, the driver must use an access card.The
//card reader is attached to the truck door. Once the driver taps on the card reader
//a set of information about the driver and the truck will be sent in the form of a
//text file.The information that will be sent is :
//• Driver first name
//• Driver last name
//• Driver ID
//• Truck ID
//• Truck location(x, y).
//Once your program receives the information from the two trucks, it should
//calculate the distance between the two trucks. Moreover, it should calculate the
//distance between each truck and the origin (0, 0)
//• Use the sample data to test your code
//• The output of your code must be the three required distances as follows:
//The distance between the two trucks is : ?
//The distance between the truck(with ID = 178534) and the origin is : ?
//The distance between the truck(with ID = 245817) and the origin is : ?



using namespace std;

int main() {
    /*Creating Driver 1 Objects*/
   
    
    driver driver1;
    cout << "Initializing Driver 1:" << endl;
    driver1.SetDrivername();
    driver1.SetDriverID();
    location location_1;
    location_1.Set_Latitude();
    location_1.Set_Longitude();
    
    /*Creating Driver 2 Objects*/
    driver driver2;
    cout << "Initializing Driver 2:" << endl;
    driver2.SetDrivername();
    driver2.SetDriverID();
    location location_2;
    location_2.Set_Latitude();
    location_2.Set_Longitude();
   
    /* /*Creating Driver 3 Objects*/
    driver driver3;
    cout << "Initializing Driver 3:" << endl;
    driver3.SetDrivername();
    driver3.SetDriverID();
    location location_3;
    location_3.Set_Latitude();
    location_3.Set_Longitude(); 
   
   /*Creating Truck Objects*/
    truck truck1;
    truck1.setDriver(driver1);
    truck1.setLocation(location_1);
    truck1.SetTruckID(178534);

    truck truck2;
    truck2.setDriver(driver2);
    truck2.setLocation(location_2);
    truck2.SetTruckID(245817);

    /*Assigning Access card of truck 1 to driver 3*/
    truck1.setAccessCard(driver3.GetDriverID());

    /*Checking whether the driver 3 has access for truck 1*/
    if (truck1.hasAccess(driver3.GetDriverID())) {
        cout << driver3.GetFirstName() +" "+ driver3.GetLastName()<< " has access to drive Truck 1." << endl;
    }
    else {
        cout << driver3.GetFirstName() + " " + driver3.GetLastName()<< " does not have access to drive Truck 1." << endl;
    }

    /*Calculating distance between two trucks*/
    double distanceBetweenTrucks = truck1.distanceFrom(truck2);

    /*Calculating distance from each truck to the origin*/
    double distanceFromOrigin1 = truck1.distanceFromOrigin();
    double distanceFromOrigin2 = truck2.distanceFromOrigin();

    /*Displaying result*/
    cout << "The distance between the two trucks is: " << distanceBetweenTrucks << endl;
    cout << "The distance between the truck (with ID = 178534) and the origin is: " << distanceFromOrigin1 << endl;
    cout << "The distance between the truck (with ID = 245817) and the origin is: " << distanceFromOrigin2 << endl;
    cout << "Saving information to the file" << endl << endl;
    Save_to_File(driver1, truck1);
    Save_to_File(driver2, truck2);
    Save_to_File(driver3, truck1);

    return EXIT_SUCCESS;
}
