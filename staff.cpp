#include <iostream>
#include <cstring>
#include "staff.h"
using namespace std;

staff :: staff()
{
	StaffName = "";
	strcpy (StaffID, "");
	strcpy (S_NIC, "");
	strcpy (S_Email, "");
	S_ContactNumber = 0;
	
}

staff :: staff(string Sname, const char SID[], const char SNIC[], const char Smail[], int Scon)
{
  StaffName = Sname;
	strcpy (StaffID, SID);
	strcpy (S_NIC, SNIC);
	strcpy (S_Email, Smail);
	S_ContactNumber = Scon;
	
}

void staff :: displayStaff() 
{
	cout<< "Staff  Nmae =" << StaffName << endl;
	cout<< "Staff ID =" << StaffID << endl;
	cout<< "Staff NIC =" << S_NIC << endl;
	cout<< "Staff Email =" << S_Email<< endl;
	cout<< "Staff Contact Number =" << S_ContactNumber << endl; 


}

void staff :: AssignPhotographer()
{
	cout <<"Photographer assigned" <<  endl;
}

staff :: ~staff()
{
	cout<<"Destructor callled" << endl;
}
