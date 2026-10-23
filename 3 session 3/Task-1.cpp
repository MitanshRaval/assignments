//Create a class called Playlist with a default constructor that sets the playlist name to 'My Favourites' and prints a welcome message when an object is created.

#include <iostream>
#include <string>
using namespace std;

class Playlist{
    public:
    string name;

    Playlist(){
        name = "My Favourites";
        cout<<"Welcome to your playlist: "<<name<<endl;
    }
};

int main(){
    Playlist p1 = Playlist();

    cout<<"Playlist name is: "<<p1.name<<endl;
    return 0;
}