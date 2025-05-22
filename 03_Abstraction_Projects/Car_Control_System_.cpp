/*

    🚗 Project Name: "Car Control System"
🔧 Goal:
User sirf startCar() aur stopCar() function call karega, lekin andar ka pura mechanism hide rahega — yehi abstraction hai.

💡 Concept Covered:
Show only important methods to the user (like startCar(), stopCar()).

Hide the internal steps like igniteEngine(), checkFuelLevel(), injectFuel() etc.


*/

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