#pragma once

// madisont, adilf, armaanm - prog71020 - lab02 - driver class interface

// REQUIREMENTS
// • Design and implement a Driver class

#ifndef DRIVER_CLASS_H
#define DRIVER_CLASS_H

// LIBRARIES & MACROS
#include <iostream>
#include <string>

using namespace std;

// CLASS
class driver {
private:
    string First_Name;
    string Last_Name;
    int Driver_ID;

public:
    /*Default Constructor*/
    driver(): First_Name(""),Last_Name(""),Driver_ID(0) {}
   
    /*Member Functions*/
    
    /*Setters*/
    void SetDrivername() {
        cout << "Enter first name for the Driver: ";
        cin >> First_Name;
        cout << "Enter last name for the Driver: ";
        cin >> Last_Name;
    }
    void SetDriverID() {
        cout << "Enter Driver's ID: ";
        cin >> Driver_ID;
    }
    /*Getters*/
    string GetFirstName()  {
        return First_Name;
    }

    string GetLastName()  {
        return Last_Name;
    }

    int GetDriverID()  {
        
        return Driver_ID;
    }

    string GetDriverDetails()  {
        return "Driver's Name: " + First_Name + " " + Last_Name + "\nDriver's ID: " + to_string(Driver_ID);
    }

};

#endif // DRIVER_CLASS_H
