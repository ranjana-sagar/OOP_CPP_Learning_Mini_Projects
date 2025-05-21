
#include<iostream>
using namespace std;

class Student
{
    private:
       string name,course;
       int rollNo;
       static int totalStudents;
    public:
       Student(){name="",course="",rollNo=0;}
       static int getTotalStudents(){return totalStudents; }
       void inputDetails()
       {
            totalStudents++;
            cout<<"Enter your name here: ";
            cin>>name;
            cout<<"Enter your roll number here: ";
            cin>>rollNo;
            cout<<"Enter you course name here: ";
            cin>>course;
       }
       void showDetails()
       {
           cout<<"Name: "<<name<<endl;
           cout<<"Roll number: "<<rollNo<<endl;
           cout<<"Course: "<<course<<endl;
       }
};
int Student::totalStudents=0;
int main()
{
    Student s1,s2,s3;
    s1.inputDetails();
    cout<<"\n";
    cout<<"Number of registered students is "<<Student::getTotalStudents()<<endl;
    s2.inputDetails();
    cout<<"\n";
    cout<<"Number of registered students is "<<Student::getTotalStudents()<<endl;
    s3.inputDetails();
    cout<<"\n";
    cout<<"Number of registered students is "<<Student::getTotalStudents()<<endl;
    cout<<"\n";
    s1.showDetails();
    cout<<"\n";
    s2.showDetails();
    cout<<"\n";
    s3.showDetails();
    return 0;
}