#include<iostream>
using namespace std;
void calculator(int,int,char);
main()
{
    int num1,num2;
    char _operator;
    cout<<"Enter the 1st number: ";
    cin>>num1;
    cout<<"Enter the 2nd number: ";
    cin>>num2;
    cout<<"Enter the operator(+,-,*,/): ";
    cin>>_operator;
    calculator(num1,num2,_operator);
}
void calculator(int num1,int num2,char _operator)
{
    if(_operator=='+')
    {
        cout<<"Sum= "<<num1+num2;
        
    }
     if(_operator=='-')
     {
        cout<<"Subtraction= "<<num1-num2;
        
    }
     if(_operator=='/')
     {
        cout<<"Division= "<<num1/num2;
        
    }
     if(_operator=='*')
     {
        cout<<"Multiplication= "<<num1*num2;
     }    
}