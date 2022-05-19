//IT21359088

#include<iostream>
#include<cstring>
#include"Location.h"
using namespace std;

Location::Location()
{
    strcpy_s(locationID,"");
    strcpy_s(locationName,"");
    strcpy_s(locationAddress, "");
    contact_number = 0;
}
Location::Location(const char lID[], const char lname[], const char laddress[], int lcontactno)
{
    strcpy_s(locationID, lID);
    strcpy_s(locationName, lname);
    strcpy_s(locationAddress, laddress);
    contact_number = lcontactno;
}
void Location::setLocationdetails(const char lID[], const char lname[], const char laddress[], int lcontactno)
{
    strcpy_s(locationID, lID);
    strcpy_s(locationName, lname);
    strcpy_s(locationAddress, laddress);
    contact_number = lcontactno;
}
char Location::getLocationID()
{
    return char(locationID);
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