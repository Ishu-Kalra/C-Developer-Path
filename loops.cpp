#include <iostream>
using namespace std;

int main() {
    double balance;
    cout<<"Enter balance"<<endl;
    cin>>balance;
    int month = 0;
    while(balance>0) {
        balance -= 500;
        month += 1;
    }
    cout<<"Total months passed is: "<<month<<endl;
    return 0;
}