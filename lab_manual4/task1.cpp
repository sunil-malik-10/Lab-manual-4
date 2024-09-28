#include<iostream>
using namespace std;
void  fuel_calculation(float);
main()
{
    float distance;
    cout<<"Enter the distance: ";
    cin>>distance;
   fuel_calculation(distance);
}
void fuel_calculation(float distance)
{
    
    cout<<"Fuel needed:"<<distance*10;
}