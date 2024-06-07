#include "truck.h"

//madisont, adilf, armaanm - prog71020 - lab02 - truck class implementation

using namespace std;

/*DEFAULT CONSTRUCTOR*/
truck::truck() : TruckID(0), Location(0, 0), accessCard(0) {}

/*SETTER FUNCTIONS*/
void truck::setDriver(driver d) {
    Driver = d;
}
void truck::setLocation(location l) {
    Location = l;
}
float truck::getLongitude() {
    return Location.Get_Longitude();
}
float truck::getLatitude() {
    return Location.Get_Latitude();
}

void truck::SetTruckID(int id) {
    TruckID = id;
}
void truck::setAccessCard(int cardID) {
    accessCard = cardID;
}
bool truck::hasAccess(int cardID) {
    return accessCard == cardID;
}

/*GETTER FUNCTIONS*/
int truck::Get_TruckID() {
    return TruckID;
}
location truck::getLocation() {
    return Location;
}
double truck::distanceFrom(truck& otherTruck) {
    double distance = sqrt(pow(Location.Get_Latitude() - otherTruck.Location.Get_Latitude(), 2) + pow(Location.Get_Longitude() - otherTruck.Location.Get_Longitude(), 2));
    return distance;
}
double truck::distanceFromOrigin() {
    location origin(0, 0);
    double distance = sqrt(pow(Location.Get_Latitude() - origin.Get_Latitude(), 2) + pow(Location.Get_Longitude() - origin.Get_Longitude(), 2));
    return distance;
}

//Function to save driver and truck information to a file
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

//Function to read driver and truck information from a file
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