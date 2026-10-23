#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ofstream file("my_fav_songs.txt");

    file << "Kesariya" << endl;
    file << "Tum Hi Ho" << endl;
    file << "Channa Mereya" << endl;
    file << "Apna Bana Le" << endl;
    file << "Raataan Lambiyan" << endl;

    file.close();
    cout << "Songs saved to my_fav_songs.txt" << endl;
    return 0;
}