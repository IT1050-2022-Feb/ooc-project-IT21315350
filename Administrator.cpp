//IT21242472
#include <iostream>
#include <cstring>
#include "Administrator.h"
using namespace std;
//.cpp file
Administrator :: Administrator
{
	
}
Administrator :: Administrator
{
	strcpy(adminId, " ");
	strcpy(adminName, " ");
	strcpy(adminEmail, " ");
	adminContactNumber = 0;
}
Administrator :: Administrator(char adminId[], char adminName[], char adminEmail[])
{
	adminId = aId;
	adminName = aName;
	adminEmail = aEmail;
	adminContactNumber = 0;
}
void Administrator :: chackPaymentDetails()
{

}
void Administrator :: updateFeedback()
{
	
}
Administrator :: ~Administrator()
{
	//Destructor
  cout << "Destructor runs" << endl;
}