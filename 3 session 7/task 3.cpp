#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    string newSong;
    cout << "Enter a new song: ";
    getline(cin, newSong);

    ofstream file("my_fav_songs.txt", ios::app);   // append mode
    file << newSong << endl;
    file.close();

    // Show the updated list
    ifstream in("my_fav_songs.txt");
    string song;
    cout << "\nUpdated list:" << endl;
    while (getline(in, song)) {
        cout << song << endl;
    }
    in.close();
    return 0;
}