//Extend your Playlist class to include a member function addSong(songTitle) that adds the song title to an array property called songs. Demonstrate by adding three song titles and displaying the updated songs list. Hint: Initialize songs as an empty array inside the constructor.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Playlist{
public:
    string name;
    string createdOn;
    bool isPublic;
    vector<string> songs;

    Playlist(string n, string c, bool p){
        name = n;
        createdOn = c;
        isPublic = p;
        songs.clear();
    }

    void addSong(string songTitle){
        songs.push_back(songTitle);
    }

    void displaySong(){
        cout<<"Songs in "<<name<<":"<<endl;
        for(int i = 0; i < songs.size(); i++){
            cout<<i + 1<<". "<<songs[i]<<endl;
        }
    }
};

int main(){
    Playlist p1("Bollywood Hits","2023-09-22",true);

    p1.addSong("Tere Liye");
    p1.addSong("Tum hi hoo");
    p1.addSong("Kesariya");

    p1.displaySong();
    return 0;
}