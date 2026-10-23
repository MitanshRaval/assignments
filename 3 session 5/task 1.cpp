#include<iostream>
#include<string>
using namespace std;

#define FLAT_DISCOUNT 100   // preprocessor macro

class PaymentProcessor {
public:
    void processPayment(double amount) {
        cout << "processPayment(amount) called\n";
        cout << "Final amount: " << amount << endl;
    }

    void processPayment(double amount, string couponCode) {
        cout << "processPayment(amount, couponCode) called\n";
        double finalAmount = amount;
        if (couponCode == "SAVE10")
            finalAmount = amount * 0.90;
        else if (couponCode == "FLAT100")
            finalAmount = (amount > FLAT_DISCOUNT) ? amount - FLAT_DISCOUNT : 0;
        cout << "Coupon applied: " << couponCode << endl;
        cout << "Final amount: " << finalAmount << endl;
    }
};

int main() {
    PaymentProcessor p;
    p.processPayment(1000);
    cout << endl;
    p.processPayment(1000, "SAVE10");
    return 0;
}
