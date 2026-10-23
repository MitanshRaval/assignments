#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Content {
public:
    string title, platform, status;
    int views;

    void display() {
        cout << title << " | " << platform << " | " << views << " | " << status << endl;
    }
};

Content items[100];
int total = 0;

void loadAll() {
    total = 0;
    ifstream file("content_list.txt");
    while (getline(file, items[total].title)) {
        getline(file, items[total].platform);
        file >> items[total].views;
        file.ignore();
        getline(file, items[total].status);
        total++;
    }
}

void saveAll() {
    ofstream file("content_list.txt");
    for (int i = 0; i < total; i++) {
        file << items[i].title << endl << items[i].platform << endl
             << items[i].views << endl << items[i].status << endl;
    }
}

void showList() {
    for (int i = 0; i < total; i++) {
        cout << i + 1 << ". " << items[i].title << " - " << items[i].platform << endl;
    }
}

int main() {
    int choice = 0, num;

    while (choice != 5) {
        cout << "\n1.Add 2.Show 3.Update status 4.Delete 5.Exit: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            Content c;
            cout << "Title: ";    getline(cin, c.title);
            cout << "Platform: "; getline(cin, c.platform);
            cout << "Views: ";    cin >> c.views;
            cin.ignore();
            cout << "Status: ";   getline(cin, c.status);

            ofstream file("content_list.txt", ios::app);
            file << c.title << endl << c.platform << endl
                 << c.views << endl << c.status << endl;
        }
        else if (choice == 2) {
            loadAll();
            showList();
        }
        else if (choice == 3) {
            loadAll();
            showList();
            cout << "Number: ";
            cin >> num;
            cin.ignore();
            if (num >= 1 && num <= total) {
                cout << "New status: ";
                getline(cin, items[num - 1].status);
                saveAll();
            }
        }
        else if (choice == 4) {
            loadAll();
            showList();
            cout << "Number: ";
            cin >> num;
            cin.ignore();
            if (num >= 1 && num <= total) {
                for (int i = num - 1; i < total - 1; i++) {
                    items[i] = items[i + 1];
                }
                total--;
                saveAll();
                showList();
            }
        }
    }

    return 0;
}