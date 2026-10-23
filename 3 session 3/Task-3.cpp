//Create a class Movie with a parameterized constructor and then use a copy constructor to duplicate a Movie object. Print both the original and copied movie details to show they are identical.

#include <iostream>
#include <string>
using namespace std;

class Movie{
    string title;
    string director;
    int year;

public:
    Movie(string t, string d, int y){
        title = t;
        director = d;
        year = y;
    }
    
    Movie(const Movie &m){
        title = m.title;
        director = m.director;
        year = m.year;
    }

    void display(){
        cout<<"Title: "<<title<<endl;
        cout<<"Director: "<<director<<endl;
        cout<<"Year: "<<year<<endl;
    }
};

int main(){
    Movie original = Movie("Pathaan", "Siddharth Anand", 2023);
    Movie copied = Movie(original);

    cout<<"Original Movies: "<<endl;
    original.display();

    cout<<"Copied Movies: "<<endl;
    copied.display();
    return 0;
}