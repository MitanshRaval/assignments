//Refactor your FoodOrder class so that the constructor takes an object as a parameter (with keys orderId, restaurantName, isDelivered) instead of separate arguments. Update your instantiation code to use this new constructor signature.
#include <iostream>
#include <string>
using namespace std;

struct OrderData{
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder{
    int orderId;
    string restaurantName;
    bool isDelivered;

public:
    FoodOrder(OrderData data){
        orderId = data.orderId;
        restaurantName = data.restaurantName;
        isDelivered = data.isDelivered;
    }

    void markDelivered(){
        isDelivered = true;
        cout<<"Order "<<orderId<<" From "<<restaurantName<<" has been delivered!"<<endl;    
    }
    
    bool getIdDelivered(){
        return isDelivered; 
    }
};

int main(){
    OrderData data = {87, "Lappinoz pizza", false};

    FoodOrder Order1(data);
    cout<<"Delivered?"<<(Order1.getIdDelivered() ? "Yes" : "No")<<endl;
    Order1.markDelivered();
    cout<<"Delivered?"<<(Order1.getIdDelivered() ? "Yes" : "No")<<endl;
    return 0;
}