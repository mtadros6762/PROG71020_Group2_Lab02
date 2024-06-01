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
        "Truck location (x,y): (" + to_string(trk.getLatitude()) + "," + to_string(trk.getLongitude()) + ")""\n";

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


void Read_from_File(truck trk) {
    // Creating the file name based on the truck ID
    string fileName = "truck_" + to_string(trk.Get_TruckID()) + "_info.txt";

    // Opening the file for reading
    ifstream inFile(fileName);

    // Check if the file is open
    if (inFile.is_open()) {
        // Check if the file is empty
        inFile.seekg(0, ios::end); // Move the cursor to the end of the file
        if (inFile.tellg() == 0) { // If the cursor position is 0, the file is empty
            cout << "No files created yet." << endl;
        }
        else {
            cout << endl << "Reading from the file " + fileName << endl << endl;; ;
            // File is not empty, read and print the contents
            inFile.seekg(0, ios::beg); // Move the cursor back to the beginning
            string line;
            while (getline(inFile, line)) {
                cout << line << endl;
            }
        }
        inFile.close(); // Close the file
    }
    else {
        // If the file cannot be opened, print an error message
        cout << "Unable to open file " << fileName << endl;
    }
}