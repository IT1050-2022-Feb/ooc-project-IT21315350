//IT21315350
#include <iostream>
#include <cstring>
#include "Customer.h"
using namespace std;

//.cpp
//
Customer :: Customer()
{
  
}
Customer::Customer ()
{
	strcpy(cId, " ");
	strcpy(cName, " ");
	strcpy(cEmail, " ");
	customerMobileNumber = 0;
	customerNIC = 0;	
}
Customer :: Customer(char cId[], char cName[], char cEmail[])
{
	customerId = cId;
	customerName = cName;
	customerEmail = cemail;
}
void Customer:: reserve()
{
	
}
void Customer :: giveLocation()
{
	
}
void Customer :: requestDeliveryItem()
{
	
}
void Customer :: giveFeedback()
{
	
}
void Customer :: payDeposit()
{
	
}
void Customer :: payFullPayment()
{
	
}
Customer :: ~Customer()
{
	//Destructor
  cout << "Destructor runs" << endl;
	
}