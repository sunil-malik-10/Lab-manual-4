#include<iostream>
using namespace std;
void fuel_calculation(float);
main()
{
    float distance;
    cout<<"Enter the distance: ";
    cin>>distance;
    fuel_calculation(distance);
}
void fuel_calculation(float distance)
{
  float  fuel_needed=distance*10;
    if(fuel_needed>=100)
    {
       cout<<"Fuel needed:"<<fuel_needed;
    }
    if(fuel_needed<100)
    {
      cout<<"Fuel needed:100";
    
    }
}
