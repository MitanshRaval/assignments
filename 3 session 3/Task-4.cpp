//Simulate a BookMyShow ticket booking by creating a Ticket class that prints 'Saving your ticket...' in its destructor. Create and delete a Ticket object to demonstrate the destructor lifecycle. Hint: Use the __del__ method (Python) or ~Ticket() (C++) to define the destructor.

#include <iostream>
using namespace std;

class Ticket{
    public:
        Ticket(){
            cout<<"Ticket Created"<<endl;
        }

        ~Ticket(){
            cout<<"Saving your ticket..."<<endl;
        }
};

int main(){
    Ticket *t = new Ticket();
    cout<<"Booking in Process..."<<endl;

    delete t;

    cout<<"Program ends"<<endl;
    return 0;
}