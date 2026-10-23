#include <iostream>
#include <string>
using namespace std;

class Song {
private:
    string title;
    string artist;

public:
    Song(string t, string a) {
        title = t;
        artist = a;
    }

    string getTitle() {
        return title;
    }

    void setTitle(string t) {
        title = t;
    }

    string getArtist() {
        return artist;
    }

    void setArtist(string a) {
        artist = a;
    }
};

int main() {
    Song s("Kesariya", "Arijit Singh");
    cout << "Before: " << s.getTitle() << " by " << s.getArtist() << endl;

    s.setTitle("Apna Bana Le");
    cout << "After: " << s.getTitle() << " by " << s.getArtist() << endl;
    return 0;
}