#include<iostream>
using namespace std;
void calculating_Payable_Amount(string,float);
main(){
         string day;
         float total_purchase_amount;
         cout<<"Enter the day of purchase: ";
         cin>>day;
         cout<<"Enter the total purchase amount: $";
         cin>>total_purchase_amount;
         calculating_Payable_Amount(day,total_purchase_amount);
}
void calculating_Payable_Amount(string day,float total_purchase_amount)
{
    if(day=="sunday")
    {
        int discount=total_purchase_amount*0.10;
        cout<<"Payable amount : $"<<total_purchase_amount-discount;
        
    }
       if(day!="sunday")
    {
       cout<<"Payable amount : $"<<total_purchase_amount;
        
    }
}