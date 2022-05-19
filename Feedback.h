//IT21264320

class Feedback{

private:

char FeedbackID[10];
char CustomerName[50];
int rating;
char FeedbackDes[150];
Customer *id;

public:

Feedback();
Feedback(const char ID[] , const char name[], int rt , const char des[] );
void display();
void addID(Customer *id);
~Feedback();

};