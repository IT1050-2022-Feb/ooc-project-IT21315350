class Delivery_items
{
	private :
		char deliveryId[10];
		char orderDate[10];
		string deliveryDescription ; 
		
	public :
		Delivery_items();
		Delivery_items(const char dId[], const char dDate[], const string dDescription[])
		void delivery();
		void add();
		void update();
		~Delivery_items();
};