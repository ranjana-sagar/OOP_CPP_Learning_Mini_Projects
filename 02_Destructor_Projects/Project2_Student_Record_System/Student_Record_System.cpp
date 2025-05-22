#include<iostream>
using namespace std;
#include<string.h>
class Student
{
  private:
    char*p=NULL;
    int rollno,marks;
  public:
    Student()
    {
          rollno=0,marks=0;
          p=(char*)malloc(sizeof(char)*50);
          if(p==NULL)
          {
              cout<<"Memory allocation is failed!"<<endl;
              exit(0);
          }
    }
    void input()
    {
        cout<<"Enter you name, roll number and marks:"<<endl;
        fflush(stdin);
        fgets(p,50,stdin);
        fflush(stdin);
        if(p[strlen(p)-1]=='\n')
           p[strlen(p)-1]='\0';
        cin>>rollno;
        cin>>marks;
    }
    void showDetails()
    {
        cout<<"Name: "<<p<<endl;
        cout<<"Roll number: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl<<endl;
    }
    ~Student()
    {
        if(p!=NULL)
           free((void*)p);   
    }

} ; 
int main()
{
    Student s[5];
    for(int i=0;i<5;i++)
    {
        cout<<"\n"<<i+1<<" -Students's details:_"<<endl;
        s[i].input();
    }
    for(int i=0;i<5;i++)
    {
       cout<<"Details of "<<i+1<<" sudent_"<<endl;
       s[i].showDetails();
    }
   
    return 0;
}

