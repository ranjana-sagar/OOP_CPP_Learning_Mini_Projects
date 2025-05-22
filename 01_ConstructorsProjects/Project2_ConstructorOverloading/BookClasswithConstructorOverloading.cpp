

#include<iostream>
#include<string.h>
using namespace std;

class Book
{
    private:
       char title[50];
       char authorName[50];
       float price;
    public:
       Book(){strcpy(title,""),strcpy(authorName,""),price=0.0;}
       Book(char t[]){strcpy(title,t),strcpy(authorName,""),price=0.0;}
       Book(char t[],char athName[]){strcpy(title,t),strcpy(authorName,athName),price=0.0;}
       Book(char t[],char athName[],float p){strcpy(title,t),strcpy(authorName,athName),price=p;}

       void displayDetails()
       {
           cout<<"--------Book's details----------\n"<<endl;
           cout<<"Title: "<<title<<endl;
           cout<<"Author name: "<<authorName<<endl;
           cout<<"Price: "<<price<<"\n"<<endl;
       }
};
int main()
{
   Book b1("Computer Network"),b2("Operating System","Robert.hook"),b3("C++","Bjarne Stroustrup",650.00);
   b1.displayDetails();
   b2.displayDetails();
   b3.displayDetails();
   return 0;
}