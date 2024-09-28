#include<iostream>
using namespace std;
void pass_or_fail(int);
main()
{
    int score;
    cout<<"Enter your score: ";
    cin>>score;
    pass_or_fail(score);
}
void pass_or_fail(int score)
{
    if(score>50)
    {
        cout<<"PASS";
        
    }
       if(score<=50)
    {
        cout<<"FAIL";
        
    }
}