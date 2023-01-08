#include<iostream>
#include<windows.h>
using namespace std;
float tax(char type, float price);
main()
{
    char type;
    float price;
    float final_price;
    cout<<"enter price of vehicle";
    cin>>price;
    cout<<"enter vehicle type code";
    cin>>type;
    float tax_paid = tax(type, price);
    cout<<"tax is :"<<tax_paid<<endl;
    final_price = price+tax_paid;
    cout<<"the final price on a vehicle of type "<<type<<"  after adding tax is  "<<final_price;
    


}
  float tax(char type, float price)
  {
    float taxAmount;
    if(type=='M')
    {
        taxAmount = price*(6*0.01);
    }
    if(type=='E')
    {
        taxAmount = price*(8*0.01);
    }
    if(type=='S')
    {
        taxAmount = price*(10*0.01);
    }
    if(type=='V')
    {
        taxAmount = price*(12*0.01);
    }
    if(type=='T')
    {
        taxAmount = price*(15*0.01);
    }
       return taxAmount;

  }