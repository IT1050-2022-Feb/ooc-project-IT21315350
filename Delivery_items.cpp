//.cpp
#include <iostream>
#include <cstring>
#include "Item_details.h"
using namespace std;

 Delivery_items :: Delivery_items()
{

}
Delivery_items::Delivery_items ()
{
	strcpy(deliveryId, " ");
	strcpy(orderDate, " ");
	deliveryDescription = 0;	
}
Delivery_items :: Delivery_items(char dId(), char dDate(), string dDescription){
	deliveryId = dId;
	orderDate = dDate;
	deliveryDescription = dDescription;
}
void Delivery_items :: delivery()
{
	
}
void Delivery_items :: add()
{
	
}
void Delivery_items :: update()
{
	
}

Delivery_items :: ~Delivery_items()
{
	//Destructor
  cout << "Destructor runs" << endl;
	
}