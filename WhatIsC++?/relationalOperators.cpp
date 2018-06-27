//Calculate shipping charges. On my own first before the solution

#include <iostream>
using namespace std;

int main() {
    int totalCost;
    cout<<"Enter total cost"<<endl;
    cin>>totalCost;
    int shippingCost = 0;
    if (totalCost<25) {
        shippingCost = 15;
    }
    else if (totalCost >=25 && totalCost < 50) {
        shippingCost = 10;
    }
    else if (totalCost >=50 && totalCost < 75) {
        shippingCost = 5;
    }

    cout<<"Shipping cost is $"<<shippingCost<<endl;
    cout<<"Total Cost is now: $"<<shippingCost + totalCost<<endl;
    return 0;
}