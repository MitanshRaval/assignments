//Modify your Playlist class so that it auto-saves the playlist name to a file called autosave.txt when the object is destroyed, simulating an auto-save feature like Spotify. Hint: Write the file-saving code inside the destructor.

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Playlist{
    string name;

public:
    Playlist(string n){
        name = n;
        cout<<"Playlist is created: "<<name<<endl;
    }

    ~Playlist(){
        ofstream file("autosave.txt");
        if(file.is_open()){
            file<<name<<endl;
            file.close();
            cout<<"Auto-Saved '"<<name<<"' to autosave.txt"<<endl;
        }else{
            cout<<"could not open autosave.txt"<<endl;
        }
    }
};

int main(){
    Playlist *p = new Playlist("Bollywood Hits");

    cout<<"Using Playlist..."<<endl;

    delete p;

    cout<<"Programs ends"<<endl;
    return 0;
}