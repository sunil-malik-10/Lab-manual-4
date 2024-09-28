#include<iostream>
using namespace std;
void calculation_of_Payable_Amount(string,float);
main()
{
      string day;
    float total_purchase_amount;
    int x=1;
    while(true)
    
     {
  
         cout<<"Enter the day of purchase: ";
        cin>>day;
         cout<<"Enter the total purchase amount: $";
        cin>>total_purchase_amount;m
         calculation_of_Payable_Amount(day,total_purchase_amount);  
           x++;
    }

}
void calculation_of_Payable_Amount(string day,float total_purchase_amount)
{
      if(day=="sunday")
      {
          float discount=total_purchase_amount*0.10;
        cout<<"Payable amount : $"<<total_purchase_amount-discount<<endl<<endl;
      }
        if(day!="sunday")
     { 
         float discount=total_purchase_amount*0.05;
        cout<<"Payable amount : $"<<total_purchase_amount-discount<<endl<<endl;
      }
      
     
}