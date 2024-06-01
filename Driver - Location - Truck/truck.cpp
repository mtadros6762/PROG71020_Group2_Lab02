#include "truck.h"
#include "location.h"
#include "driver.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//madisont, adilf, armaanm - prog71020 - lab02 - truck class implementation

void Save_to_File(driver drv, truck trk) {
    /*Formatting the information into a string*/
    string info = "Driver first name: " + drv.GetFirstName() + "\n" +
        "Driver last name: " + drv.GetLastName() + "\n" +
        "Driver ID: " + to_string(drv.GetDriverID()) + "\n" +
        "Truck ID: " + to_string(trk.Get_TruckID()) + "\n" +
        "Truck location (x,y): (" + to_string(trk.getLatitude()) + "," + to_string(trk.getLongitude()) + ")\n";

    /*Writing the information to the text file*/
    string fileName = "truck_" + to_string(trk.Get_TruckID()) + "_info.txt";
    ofstream outFile(fileName);
    if (outFile.is_open()) {
        outFile << info;
        outFile.close();
        cout << "Information written to " << fileName << endl;
    }
    else {
        cout << "Unable to open file " << fileName << endl;
    }
}