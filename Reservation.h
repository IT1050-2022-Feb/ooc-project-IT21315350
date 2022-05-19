//IT21359088

class Reservation {
private:
    char reservationID[10];
    char reservationDate[10];
    char reservationTime[10];
    char package_type[20];
public:
    Reservation();
    Reservation(const char rID[], const char rdate[], const char rtime[], const char packtype[]);
    void setReservationDetails(const char rID[], const char rdate[], const char rtime[], const char packtype[]);
    char getReservationID();
    void printReservationDetails();
    ~Reservation();
};
