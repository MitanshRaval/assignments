//Build a class Product for a Flipkart-style app with a parameterized constructor that takes productName, price, and rating as arguments and displays all details using a displayInfo() method.

#include <iostream>
#include <string>
using namespace std;

class Product{
    string ProductName;
    float price;
    float rating;

public:
    Product(string name, float p, float r){
        ProductName = name;
        price = p;
        rating = r;
    }

    void displayInfo(){
        cout<<"Product: "<<ProductName<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Rating: "<<rating<<endl;   
    }
};

int main(){
    Product p1 = Product("Earbuds",1999,3.9);
    Product p2 = Product("Shoes",2399,4.9);

    p1.displayInfo();
    cout<<endl;
    p2.displayInfo();
    return 0;
}