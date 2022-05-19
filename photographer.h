class photographer
{
	private:
		
		char photog_Name[30];
		char photog_ID[10];
		char P_NIC[10];
		char P_Email[50];
		int P_ContactNumber;
		
	public:
		
		photographer();
		photographer(const char Pname[], const char PID[], const char PNIC[], const char Pmail[], int Pcon);
		void displayPhotographer();
		void respond();
		~photographer();
		
		
		
};