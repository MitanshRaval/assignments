//Add a member function to your Playlist class named togglePublic() that switches isPublic between true and false each time it is called. Demonstrate by toggling the value twice and printing the result each time.

#include <iostream>
#include <string>
using namespace std;

class Playlist{
    public:
    string name;
    string createdOn;
    bool isPublic;

    Playlist(string n, string c, bool p){
        name = n;
        createdOn = c;
        isPublic = p;
    }

    void togglePublic(){
        isPublic = !isPublic;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Created On: "<<createdOn<<endl;
        cout<<"Is Public: "<< (isPublic ? "Yes" : "No")<< endl;
    }
};

int main(){
    Playlist p1("Bollywood Hits", "2024-09-26", true);

    cout<<"Befor Toggle:"<<endl;
    p1.display();

    p1.togglePublic();
    cout<<"\nAfter 1st Toggle:"<<endl;
    p1.display();

    p1.togglePublic();
    cout<<"\nAfter 2nd Toggle:"<<endl;
    p1.display();
    return 0;
}