//IT21359088

#include<iostream>
#include<cstring>
#include"Reservation.h"
using namespace std;

Reservation::Reservation()
{
    strcpy_s(reservationID,"");
    strcpy_s(reservationDate,"");
    strcpy_s(reservationTime,"");
    strcpy_s(package_type,"");
}
Reservation::Reservation(const char rID[], const char rdate[], const char rtime[], const char packtype[])
{
    strcpy_s(reservationID, rID);
    strcpy_s(reservationDate, rdate);
    strcpy_s(reservationTime, rtime);
    strcpy_s(package_type, packtype);
}
void Reservation::setReservationDetails(const char rID[], const char rdate[], const char rtime[], const char packtype[])
{
    strcpy_s(reservationID, rID);
    strcpy_s(reservationDate, rdate);
    strcpy_s(reservationTime, rtime);
    strcpy_s(package_type, packtype);
}
char Reservation::getReservationID()
{
    return char(reservationID);
}
void Reservation::printReservationDetails()
{
    cout << "Reservation ID:  " << reservationID << endl;
    cout << "Reservation date:  " << reservationDate << endl;
    cout << "Reservation time:  " << reservationTime << endl;
    cout << "Package type:  " << package_type << endl;
}
Reservation::~Reservation()
{
    cout << "Remove reservation";
}