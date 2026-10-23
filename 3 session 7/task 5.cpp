#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ifstream file("insta_followers.txt");
    string username;
    int count = 0;

    while (getline(file, username)) {
        if (username != "")      // skip blank lines
            count++;
    }

    file.close();
    cout << "Total followers: " << count << endl;
    return 0;
}