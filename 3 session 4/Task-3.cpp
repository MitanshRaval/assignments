//Create a Podcaster class that also inherits from SocialMediaUser and adds a property podcastName and a method publishEpisode(episodeTitle) that prints 'Episode [episodeTitle] published on [podcastName]'.

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

class Podcaster : public SocialMediaUser {
public:
    string podcastName;

    Podcaster(string u, int f, string p) : SocialMediaUser(u, f) {
        podcastName = p;
    }

    void publishEpisode(string episodeTitle) {
        cout << "Episode " << episodeTitle << " published on " << podcastName << endl;
    }
};

int main() {
    Podcaster p1("jay_talks", 3200, "Tech Talks with Jay");

    p1.displayProfile();                      
    p1.publishEpisode("Learning C++ Easily"); 

    return 0;
}