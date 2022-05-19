//IT21359088
//
class Location{
private:
    char locationID[10];
    char locationName[20];
    char locationAddress[100];
    int contact_number;

public:
    Location();
    Location(const char locationID[], const char locationName[], const char locationAddress[], int contact_number);
    void setLocationdetails(const char lID[], const char lname[], const char laddress[], int lcontactno);
    char getLocationID();
    void printLocationDetails();
    ~Location();
};