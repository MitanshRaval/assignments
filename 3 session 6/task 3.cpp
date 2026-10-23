#include <iostream>
#include <string>
using namespace std;

class Product {
public:
    virtual void upload() = 0;   // pure virtual function (abstract)
};

class Electronics : public Product {
public:
    void upload() {
        cout << "Electronics: upload product with specs, warranty and images" << endl;
    }
};

class Clothing : public Product {
public:
    void upload() {
        cout << "Clothing: upload product with sizes, colors and fabric details" << endl;
    }
};

int main() {
    // Product p;   // Error: cannot create object of abstract class
    Product* p1 = new Electronics();
    Product* p2 = new Clothing();
    p1->upload();
    p2->upload();
    return 0;
}