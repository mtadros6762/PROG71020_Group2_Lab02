#include "driver.h"

//madisont, adilf, armaanm - prog71020 - lab02 - driver class implementation

/*DEFAULT CONSTRUCTOR*/
driver::driver() : First_Name(""), Last_Name(""), Driver_ID(0) {}

/*SETTERS*/

//Function to get Driver's name from user input
void driver::SetDriverName() {
    do {
        cout << "Enter first name for the Driver: ";
        cin >> First_Name;
        //Checking for cin failure and alphabetical validation
        if (cin.fail() || alphaValidation(First_Name) == false) {
            cout << "Invalid input. Please enter a valid string." << endl;
        }
    } while (cin.fail() || alphaValidation(First_Name) == false);
  
    do {
        cout << "Enter last name for the Driver: ";
        cin >> Last_Name;
        //Checking for cin failure and alphabetical validation
        if (cin.fail() || alphaValidation(Last_Name) == false) {
            cout << "Invalid input. Please enter a valid string." << endl;
        }
    } while (cin.fail() || alphaValidation(Last_Name) == false);
}

//Function to get driver ID from user input
void driver::SetDriverID() {
    cout << "Enter Driver's ID: ";
    
    //Loop if the user input for Driver_ID is not valid integer(s)
    while (!(cin >> Driver_ID)) {
        cin >> Driver_ID;

        if (!(cin >> Driver_ID)) {
            cout << "Invalid input. Enter valid integers for Driver's ID: ";
            cin.clear(); //Clearing fail flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard the line
        }
    }
}

/*GETTERS*/
string driver::GetFirstName() {
    return First_Name;
}
string driver::GetLastName() {
    return Last_Name;
}
int driver::GetDriverID() {
    return Driver_ID;
}
string driver::GetDriverDetails() {
    return "Driver's Name: " + First_Name + " " + Last_Name + "\nDriver's ID: " + to_string(Driver_ID);
}

//Function for alphabetical validation
bool alphaValidation(string input) {

    //Loop checks if each character in the string is alphabetical
    for (int i = 0; i != (int)input.length(); i++)
    {
        if (!isalpha(input[i]))
        {
            return false;
        }
    }
    return true;
}