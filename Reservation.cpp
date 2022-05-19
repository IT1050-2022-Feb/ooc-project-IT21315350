//IT21359088

#include<iostream>
#include<cstring>
#include"Reservation.h"
using namespace std;

Reservation::Reservation()
{
    strcpy(resevationID,"");
    strcpy(reservationDate,"");
    strcpy(reservationTime,"");
    strcpy(package_type,"");
}
Reservation::Reservation(const char rID[], const char rdate[], const char rtime[], const char packtype[])
{
    strcpy(resevationID, rID);
    strcpy(reservationDate, rdate);
    strcpy(reservationTime, rtime);
    strcpy(package_type, packtype);
}
void Reservation::setReservationDetails(const char rID[], const char rdate[], const char rtime[], const char packtype[])
{
    strcpy(resevationID, rID);
    strcpy(reservationDate, rdate);
    strcpy(reservationTime, rtime);
    strcpy(package_type, packtype);
}
char Reservation::getReservationID()
{
    return reservationID;
}
void Reservation::printReservationDetails()
{
    cout << "Reservation ID:  " << resevationID << endl;
    cout << "Reservation date:  " << reservationDate << endl;
    cout << "Reservation time:  " << reservationTime << endl;
    cout << "Package type:  " << package_type << endl;
}
Reservation::~Reservation()
{
    cout << "Remove reservation";
}