////IT21315350
//Customer.h
include "Payment.h"
include "Location.h"
include "Feedback.h"
include "Reservtion.h"

class Customer
{
	private :
		char customerId[10];
		char customerName[20];
		char customerEmail[20];
		int customerMobileNumber[10];
		int customerNIC;
		
	public : 
		Customer();
		Customer(const char cId[], const char cName[], const char cEmail[])
	
		void reserve();
		void giveLocation();
		void requestDeliveryItem();
		void giveFeedback();
		void payDeposit();
		void payFullPayment();
		~Customer();
				
};