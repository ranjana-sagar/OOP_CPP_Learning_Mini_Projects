


#include<iostream>
using namespace std;
#include<string.h>
class Student
{
    private:
       char name[50];
       int rollno;
    public:
       Student(){ strcpy(name,"Unknown"),rollno=0;}
       Student(char nm[],int r){strcpy(name,nm),rollno=r;}
       Student(char nm[]){strcpy(name,nm),rollno=0;}
       void displayDetails()
       {
           cout<<"Name: "<<name<<endl;
           cout<<"Roll no: "<<rollno<<endl;
       }
};
int main()
{
    Student s1,s2("Ranjana Sagar",21000910);
    cout<<"Default student:"<<endl;
    s1.displayDetails();
    cout<<"\nCustom student:"<<endl;
    s2.displayDetails();
    return 0;
}