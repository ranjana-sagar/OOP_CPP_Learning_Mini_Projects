
#include<iostream>
using namespace std;

class Car
{
    private:
       int fuelevel;
       void igniteEngine()
       {
           cout<<"Engine is working: "<<endl;
           Fuellevel();
           Injectfuel();
       }
       void Fuellevel()
       {
            cout<<"Fuel level is "<<fuelevel<<"%!"<<endl;
       }
       void Injectfuel()
       {
           if(fuelevel<10)
           {
              fuelevel+=10;
              cout<<"Fuel was low, 10%, fuel was injected! Now fuel level is "<<fuelevel<<endl;
           }   
       }
    public:
      Car(){fuelevel=100;}
      void Startcar()
      {
         cout<<"Car is Running."<<endl;
         igniteEngine();
      }
      void Stopcar()
      {
          cout<<"Stoped Car"<<endl;
      }
};
int main()
{
    Car c1,c2;
    c1.Startcar();
    c1.Stopcar();
    return 0;
}
