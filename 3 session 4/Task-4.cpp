//Demonstrate multilevel inheritance by creating a class GamingYouTuber that inherits from YouTuber and adds a method streamGame(gameName) which prints '[username] is now streaming [gameName] on [channelName]'.

#include <iostream>
#include <string>
using namespace std;

class SocialMediaUser {
public:
    string username;
    int followers;

    SocialMediaUser(string u, int f) {
        username = u;
        followers = f;
    }

    void displayProfile() {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

class YouTuber : public SocialMediaUser {
public:
    string channelName;

    YouTuber(string u, int f, string c) : SocialMediaUser(u, f) {
        channelName = c;
    }

    void uploadVideo(string title) {
        cout << "Video " << title << " uploaded to " << channelName << endl;
    }
};


class GamingYouTuber : public YouTuber {
public:
    GamingYouTuber(string u, int f, string c) : YouTuber(u, f, c) {}

    void streamGame(string gameName) {
        cout << username << " is now streaming " << gameName << " on " << channelName << endl;
    }
};

int main() {
    GamingYouTuber g1("jay_gamer", 8000, "Jay Gaming Zone");

    g1.displayProfile();             
    g1.uploadVideo("BGMI Highlights"); 
    g1.streamGame("BGMI");           

    return 0;
}