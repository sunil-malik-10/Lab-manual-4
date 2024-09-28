#include<iostream>
using namespace std;
void priniting_name(string);
main()
{
    string name;
    cout<<"Enter your name:";
    cin>>name;
    priniting_name(name);
}
void priniting_name(string name)
{
     int x=1;
     while(true)
    {
       cout<<" "<<name; 
       x++;
        
    }
}