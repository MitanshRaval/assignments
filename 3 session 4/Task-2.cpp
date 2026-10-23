//Build a YouTuber class that inherits from SocialMediaUser and adds a property channelName and a method uploadVideo(title) that prints 'Video [title] uploaded to [channelName]'.

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

int main() {
    YouTuber y1("jay_dev", 5000, "Code With Jay");

    y1.displayProfile();                  
    y1.uploadVideo("C++ Inheritance");    

    return 0;
}