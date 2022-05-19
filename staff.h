class staff
{
	private:
		
		string StaffName;
		char StaffID [10];
		char S_NIC[10];
		char S_Email[50];
		int S_ContactNumber;
		
	public:
		
		staff();
		staff(string Sname, const char SID[], const char SNIC[], const char Smail[], int Scon);
		void displayStaff();
		void AssignPhotographer();
		~staff();
	
		
			
};