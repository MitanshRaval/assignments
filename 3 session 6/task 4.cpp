#include <iostream>
#include <string>
using namespace std;

class UserProfile {
public:
    string name;

private:
    string phoneNumber;

public:
    void setPhoneNumber(string p) {
        phoneNumber = p;
    }

    string getPhoneNumber() {
        return phoneNumber;
    }
};

int main() {
    UserProfile user;
    user.name = "vidhyaaa";
    user.setPhoneNumber("9876543210");

    cout << "Name: " << user.name << endl;
    cout << "Phone: " << user.getPhoneNumber() << endl;
    // user.phoneNumber = "123";   // Error: phoneNumber is private
    return 0;
}