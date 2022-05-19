//IT21359088

#include<iostream>
#include<cstring>
#include"Location.h"
using namespace std;

Location::Location()
{
    strcpy(locationID,"");
    strcpy(locationName,"");
    strcpy(locationAddress, "");
    contact_number = 0;
}
Location::Location(const char lID[], const char lname[], const char laddress[], int lcontactno)
{
    strcpy(locationID, lID);
    strcpy(locationName, lname);
    strcpy(locationAddress, laddress);
    contact_number = lcontactno;
}
void Location::setLocationdetails(const char lID[], const char lname[], const char laddress[], int lcontactno)
{
    strcpy(locationID, lID);
    strcpy(locationName, lname);
    strcpy(locationAddress, laddress);
    contact_number = lcontactno;
}
char Location::getLocationID()
{
    return locationID;
}
void Location::printLocationDetails()
{
    cout << "Location ID:  " << locationID << endl;
    cout << "Location name:  " << locationName << endl;
    cout << "Location address:  " << locationAddress << endl;
    cout << "Location contact number:  " << contact_number << endl;
}
Location::~Location()
{
    cout << "Location removed";
}