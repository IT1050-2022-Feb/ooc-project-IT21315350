//IT21264320

#include<iostream>
#include<cstring>
#include "AdminLogin.h"

using namespace std;


AdminLogin :: AdminLogin(){

    strcpy(AdminID , "");
    strcpy(username , "");
    strcpy(password , "");

}

AdminLogin ::  AdminLogin(const char id[] , const char usrnm[] , const char psswd[]){

    strcpy(AdminID , id);
    strcpy(username , usrnm);
    strcpy(password , psswd);

}

void AdminLogin :: checkLogin(){


}

AdminLogin :: ~AdminLogin(){

    cout << "Destructor runs" << endl;

}