//IT21264320
//
class AdminLogin{
 
    private:

    char AdminID[10];
    char username[50];
    char password[50];

    public:

    AdminLogin();
    AdminLogin(const char id[] , const char usrnm[] , const char psswd[]);
    void checkLogin();
    ~AdminLogin();

};