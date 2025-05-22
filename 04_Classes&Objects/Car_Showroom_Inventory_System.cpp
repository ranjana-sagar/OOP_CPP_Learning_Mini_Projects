
#include<iostream>
#include<stdio.h>
using namespace std;

class car
{
  private:
      string color;
      string model;
      short int speed;
      unsigned price;
  public:
      void setter(string color1,string model1,short int speed1,unsigned price1)  
      {
          color=color1,model=model1,speed=speed1;
          price=(price1>0)?price1:0;
      }  
      void displayDetails()
      {
         cout<<"Model: "<<model<<endl;
         cout<<"Color: "<<color<<endl;
         cout<<"Speed: "<<speed<<" Km/h"<<endl;
         cout<<"Price: "<<price<<endl;
      }
};
int main()
{
   car c1,c2,c3;
   c1.setter("Red","Maruti",80,400000);
   c2.setter("Black","Thar",90,900000);
   c3.setter("Sliver","Roll Royas",120,150000000);
   c1.displayDetails();
   cout<<endl;
   c2.displayDetails();
   cout<<endl;
   c3.displayDetails();
   return 0;
}

