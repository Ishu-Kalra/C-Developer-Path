#include <iostream>
using namespace std;

int main() {
    double bill;
    cout<<"Enter the bill:\n$"<<endl;;
    cin>>bill;
    double cash;
    cout<<"Enter the csh given:\n$"<<endl;
    cin>>cash;

    double dollars = static_cast<int>(cash-bill);
    int pennies = cash - bill - dollars; //Will later be promoted to double
    int quarters = static_cast<int>(pennies / 25);
    pennies = pennies - quarters * 25;
    int dimes = static_cast<int>(pennies / 5);
    pennies = pennies - dimes * 5;
    int nickels = static_cast<int>(pennies / 2);
    pennies = pennies - nickels * 2;

}