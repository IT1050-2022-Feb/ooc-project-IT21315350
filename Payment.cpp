#include <iostream>
#include<cstring>
#include"payment.h"

using namespace std;

//.cpp
Payment :: Payment()
{
	
}
Payment :: Payment()
{
	strcpy(payId, " ");
	strcpy(paymentMethod, " ");
	strcpy(paymentDate, " ");
	advancedFee = 0.0;
	totalFee = 0.0;
}
Payment :: Payment(char pId[], char pDate[], float ptotalFee)
{
	payId = pId;
	paymentDate = pDate;
	totalFee = ptotalFee;
}
void Payment :: generatePayId()
{
	
}
void Payment :: storePaymentDetails()
{
	
}
void Payment ::  validate()
{
	
}
Payment :: ~Payment()
{
	//Destructor
  cout << "Destructor runs" << endl;
}