#include<iostream>
#include<cstring>

#include "Feedback.h"
#include "AdminLogin.h"
#include "Location.h"
#include "Reservation.h"
#include "Admin.h"
#include "Customer.h"
#include "Item_details.h"
#include "Payment.h"
#include "Photographer.h"
#include "Staff.h"


using namespace std;

int main(){

	Customer *c1 = new Customer("cs1234" , "Kasun Kalhara" , "kasunkalhara@gmail.com");
	Reservation *r1 = new Reservation("RS1234" , "2022/10/23" , "10.00Am", "Wedding");
	Location *l1 = new Location("LC1234", "Hilton Hotel" , "Gall rd , Colombo" , 0112324345);
	photographer *ph1= new photographer("Janith Perera" , "PH1234" , "2000234v" "janithperera@gmail.com", 0771231235 );
	staff  *s1 = new staff("Kusal Shanaka" , "st1234" , "123753v" , "kusalshanaka@gmail.com" , 0753421134);
	Payment *p1 = new Payment("PY1234" , "MASTER" , "2022/05/24" , 15000.00 , 75000.00);
	Delivery_items *d1 = new Delivery_items("dl1234" , "2022/11/13", "album");
	Feedback *f1 = new Feedback("FB1234" , "Kasun Kalhara" , 8 , "Very good, recommended!");
	Administrator *a1 = new Administrator("AD1234" , "Sasindu Perera" , "sasindu@gmail.com");
	AdminLogin *al1= new AdminLogin("AD1234" , "sasindu144438" , "colombo1234@");

	delete c1 , r1 , l1 , ph1 , s1 , p1 , d1 , f1 , a1 , al1;

  return 0;
}