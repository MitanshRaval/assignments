//Implement hierarchical inheritance by creating an InstagramInfluencer class that inherits from SocialMediaUser and adds a method postStory(storyTitle) which prints '[username] posted a new story: [storyTitle]'. Hint: Think about how SocialMediaUser is the parent for YouTuber, Podcaster, and InstagramInfluencer.

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

class InstagramInfluencer : public SocialMediaUser {
public:
    InstagramInfluencer(string u, int f) : SocialMediaUser(u, f) {}

    void postStory(string storyTitle) {
        cout << username << " posted a new story: " << storyTitle << endl;
    }
};

int main() {
    YouTuber y1("jay_dev", 5000, "Code With Jay");
    Podcaster p1("jay_talks", 3200, "Tech Talks with Jay");
    InstagramInfluencer i1("jay_insta", 12000);

    y1.uploadVideo("C++ Inheritance");
    p1.publishEpisode("Learning C++ Easily");
    i1.postStory("Weekend Trip");

    i1.displayProfile();

    return 0;
}