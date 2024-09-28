#include<iostream>
using namespace std;
void inches_to_feet(float);
main()
{
    float measurement;
    cout<<"Enter the measurement in inches: ";
    cin>>measurement;
    inches_to_feet(measurement);
}
void inches_to_feet(float measurement)
{
    
    cout<<"Equilent in feet:"<<measurement/12;
}