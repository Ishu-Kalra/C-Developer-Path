#include <iostream>  //Reading and writing to files
#include <iomanip>
using namespace std;   //std allows standard function accessibility
int main()            // Must be there in every program
{
    //Each line executes sequentially

    double mpg, distance, gallons, pricePerGallon, totalCost;
    //output using insertion operator
    cout<<"Enter mpg"<<endl; //Send message to User
    //input using extraction operator
    cin>>mpg;  //cin reads from console, cout writes to console.

    cout<<"Enter distance in miles."<<endl;
    cin>>distance;

    cout<<"Enter Price per gallon"<<endl;
    cin>>pricePerGallon;

    gallons = distance/mpg;

    totalCost = gallons * pricePerGallon;
    //Set precision makes it upto 2 decimal points
    cout<<"Total trip cost: $"<<fixed<<setprecision(2)<<totalCost<<endl;

    return 0;
}
