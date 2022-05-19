//IT21242472
//Payment.h
include "Customer.h"
include "Administrator.h"

class Payment //
{
	private :
		char payId[10];
		char paymentMethod[10];
		char paymentDate[10];
		float advancedFee;
		float totalFee;
		
	public :
		Payment();
		Payment(char pId[], char pDate[], float ptotalFee);
		void generatePayId();
		void storePaymentDetails();
		void validate();
		~Payment();
};