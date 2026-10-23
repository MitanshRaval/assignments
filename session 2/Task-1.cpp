//Create a class called Playlist with properties: name (string), createdOn (date), and isPublic (boolean). Instantiate an object of Playlist and print all its properties.

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

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Created On: "<<createdOn<<endl;
        cout<<"Is Public: "<< (isPublic ? "Yes" : "No")<< endl;
    }
};

int main(){
    Playlist p1("Bollywood Hits", "2024-09-26", true);
    p1.display();
    return 0;
}