#include <iostream>
#include <string>
using namespace std;

class InstaStory {
protected:
    int storyViews;

public:
    InstaStory(int v) {
        storyViews = v;
    }
};

class SponsoredStory : public InstaStory {
public:
    SponsoredStory(int v) : InstaStory(v) {}

    void showViews() {
        cout << "Sponsored story views: " << storyViews << endl;
    }
};

int main() {
    SponsoredStory s(2500);
    s.showViews();
    // s.storyViews = 10;   // Error: storyViews is protected
    return 0;
}