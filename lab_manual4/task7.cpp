#include<iostream>
using namespace std;
void even_or_odd(int);
main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    even_or_odd(number);
}
void even_or_odd(int number)
{
    if(number%2==0)
    {
        cout<<"Number "<< number<< " is even";
        
    }
       if(number%2==1)
    {
       cout<<"Number "<< number<< " is odd";
        
    }
}