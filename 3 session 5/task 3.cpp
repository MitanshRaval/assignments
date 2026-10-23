#include <iostream>
#include <string>
using namespace std;

class PaymentProcessor {
public:
    void processPayment(double amount) {
        cout << "processPayment(amount) called" << endl;
        cout << "Final amount: " << amount << endl;
    }

    void processPayment(double amount, string coupon) {
        cout << "processPayment(amount, coupon) called" << endl;
        double finalAmount = amount;
        if (coupon == "SAVE10")
            finalAmount = amount * 0.90;
        cout << "Final amount: " << finalAmount << endl;
    }
};

int main() {
    PaymentProcessor p;
    p.processPayment(1000);
    p.processPayment(1000, "SAVE10");
    return 0;
}