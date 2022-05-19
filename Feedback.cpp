//IT21264320

#include<iostream>
#include<cstring>
#include "Feedback.h"

using namespace std;

Feedback :: Feedback(){

    strcpy(FeedbackID , "");
    strcpy(CustomerName , "");
    rating = 0;
    strcpy(FeedbackDes , "");

}

 Feedback :: Feedback(const char ID[] , const char name[], int rt , const char des[] ){

    strcpy(FeedbackID , ID);
    strcpy(CustomerName , name);
    rating = rt;
    strcpy(FeedbackDes , des);
}

void ::Feedback :: display(){

cout << "FeedbackID  : " <<FeedbackID << endl;
cout << "Customer Name : " << CustomerName << endl;
cout << "Rating : " << rating<< endl;
cout << "Feedback : " <<FeedbackDes<< endl;

}

void Feedback :: addID(Customer *id){


    id = new Customer()
}

Feedback :: ~Feedback(){

    cout << "Destructor runs" << endl;
}