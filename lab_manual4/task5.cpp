#include<iostream>
using namespace std;
void vote_eligibility(int);
main()
{
    int age;
    cout<<"Enter the your age: ";
    cin>>age;
    vote_eligibility(age);
}
void vote_eligibility(int age)
{
    if(age>=18)
    {
        cout<<"You are eligible for vote.";
        
    }
       if(age<18)
    {
        cout<<"You are not eligible for vote.";
        
    }
}