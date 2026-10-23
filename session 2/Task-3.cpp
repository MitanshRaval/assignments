//Create a class called FoodOrder with properties: orderId (number), restaurantName (string), and isDelivered (boolean). Write a member function markDelivered() that sets isDelivered to true and prints a message. Instantiate FoodOrder and call markDelivered().

#include <iostream>
#include <string>
using namespace std;

class FoodOrder{
    public:
    int orderId;
    string restaurentName;
    bool isDelivered;

    FoodOrder(int o, string r){
        orderId = o;
        restaurentName = r;
        isDelivered = false;
    }

    void markDelivered(){
        isDelivered = true;
        cout<<"Order "<<orderId<<" from "<<restaurentName<<" has been delivered!"<<endl;
    }
};

int main(){
    FoodOrder order1(87, "Lappinoz pizza");

    cout<<"Delivered?" <<(order1.isDelivered ? "Yes" : "No")<<endl;
    order1.markDelivered();
    cout<<"Delivered?" <<(order1.isDelivered ? "Yes" : "No")<<endl;
    return 0;
}