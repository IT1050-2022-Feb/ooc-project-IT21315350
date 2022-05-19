//IT21242472
//Administrator.h
class Administrator
{
	private :
		char adminId[10];
		char adminName[20];
		char adminEmail[20];
		int adminContactNumber;
		
	public :
		Administrator();
		Administrator(const char adminId[],const char adminName[], const char "adminEmail");
		void chackPaymentDetails();
		void updateFeedback();
		~Administrator();
}