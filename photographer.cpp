#include <iostream>
#include <cstring>
#include "photographer.h"
using namespace std;

photographer :: photographer()
{
	strcpy(photog_Name, "");
	strcpy(photog_ID, "");
	strcpy(P_NIC, "");
	strcpy(P_Email, "");
	P_ContactNumber = 0;
	
}

photographer ::photographer(const char Pname[], const char PID[], const char PNIC[], const char Pmail[], int Pcon)
{
	strcpy(photog_Name, Pname);
	strcpy(photog_ID, PID);
	strcpy(P_NIC, PNIC);
	strcpy(P_Email, Pmail );
	P_ContactNumber = Pcon;
	
}

void photographer ::displayPhotographer()
{
	cout<< "Photographer Nmae =" << photog_Name << endl;
	cout<< "Photographer ID =" << photog_ID << endl;
	cout<< "Photographer NIC =" << P_NIC << endl;
	cout<< "Photographer Email =" << P_Email<< endl;
	cout<< "Contact Number =" << P_ContactNumber << endl; 
}

void photographer ::respond()
{
	cout << "Respond sent" << endl;
}


photographer :: ~photographer()
{
	cout << "Destructor called" << endl;
}