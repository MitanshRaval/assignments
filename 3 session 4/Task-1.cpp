//Create a base class called SocialMediaUser with properties username and followers, and a method displayProfile() that prints the username and follower count.
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

int main() {
    SocialMediaUser user1("jay_dev", 1250);
    user1.displayProfile();

    return 0;
}