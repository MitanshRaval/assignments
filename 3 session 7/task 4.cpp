#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    string name;
    double price;

    ofstream out("wishlist.txt");
    for (int i = 1; i <= 3; i++) {
        cout << "Enter product " << i << " name: ";
        getline(cin, name);
        cout << "Enter price: ";
        cin >> price;
        cin.ignore();               // clear the newline left by cin

        out << name << endl;
        out << price << endl;
    }
    out.close();

    ifstream in("wishlist.txt");
    cout << "\n--- Your Wishlist ---" << endl;
    while (getline(in, name)) {
        in >> price;
        in.ignore();
        cout << name << " - Rs." << price << endl;
    }
    in.close();
    return 0;
}