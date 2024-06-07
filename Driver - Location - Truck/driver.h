#pragma once

//madisont, adilf, armaanm - prog71020 - lab02 - driver class interface

//REQUIREMENTS
//• Design and implement a Driver class

#ifndef DRIVER_CLASS_H
#define DRIVER_CLASS_H

//LIBRARIES
#include <iostream>
#include <string>

using namespace std;

//CLASS
class driver {
private:
    //DATA
    string First_Name;
    string Last_Name;
    int Driver_ID;

public:
    /*DEFAULT CONSTRUCTOR*/
    driver();
   
    /*MEMBER FUNCTIONS*/
    
    /*SETTERS*/
    void SetDriverName();
    void SetDriverID();

    /*GETTERS*/
    string GetFirstName();
    string GetLastName();
    int GetDriverID();
    string GetDriverDetails();
};

bool alphaValidation(string input);

#endif // DRIVER_CLASS_H
