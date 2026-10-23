#include <iostream>
using namespace std;

class SocialMediaUploader {
public:
    virtual void uploadContent() {
        cout << "Uploading content to a social media platform...\n";
    }
    virtual ~SocialMediaUploader() {}
};

class InstagramUploader : public SocialMediaUploader {
public:
    void uploadContent() override {
        cout << "Instagram: Upload a photo or Reel, add filters, caption and hashtags, then share.\n";
    }
};

class YouTubeUploader : public SocialMediaUploader {
public:
    void uploadContent() override {
        cout << "YouTube: Upload a long video, add title, description, thumbnail and tags, then publish.\n";
    }
};

int main() {
    SocialMediaUploader* u1 = new InstagramUploader();
    SocialMediaUploader* u2 = new YouTubeUploader();
    u1->uploadContent();
    u2->uploadContent();
    delete u1;
    delete u2;
    return 0;
}