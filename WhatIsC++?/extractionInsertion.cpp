//Expressions.cpp
#include <iostream>
using namespace std;
int main()
{
    int length, width, area, perimeter;
    int radius, circleArea, circumference;
    string firstName, lastName, fullName;

    cout<<"Enter the length and width of a rectangle"<<endl;
    cin>>length;
    cin>>width;
    area = length * width;
    perimeter = 2* (length + width);
    cout<<"The area of the rectangle is: "<<area<<endl;
    cout<<"The perimeter of the rectangle is:"<<perimeter<<endl;

    cout<<"Enter the radius of the circle:";
    cin>>radius;
    circleArea = 3.14 * radius * radius;
    circumference = 2 * radius * 3.14;
    cout<<"The area of the circle is:"<<circleArea<<endl;
    cout<<"The circumference of the circle is:"<<circumference<<endl;

    cout<<"Enter the first and last name"<<endl;
    cin>>firstName;
    cin>>lastName;
    fullName = firstName + " " + lastName;
    cout<<"The full name is:" << fullName<<endl;
    return 0;
} 