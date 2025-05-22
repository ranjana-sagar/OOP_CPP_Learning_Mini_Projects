
#include<iostream>
using namespace std;

class FileBuffer
{
    private:
       char*buffer=nullptr;
       int size;
    public:
       FileBuffer(){size=0;}
       FileBuffer(int s)
       {
           if(s>0)
           {
               buffer=(char*)calloc(s,sizeof(char));
               if(buffer==NULL)
               {
                  cout<<"Memory allocation is failed."<<endl;
                  exit(1);
               }  
           }
           else
               cout<<"Invalid size of array";
       }
       FileBuffer(int s,char*p)
       {
            size=s;
            if(s>0)
           {
               buffer=(char*)calloc(s+1,sizeof(char));
               if(buffer==NULL)
               {
                  cout<<"Memory allocation is failed."<<endl;
                  exit(1);
               } 
                for(int i=0;i<s;i++)
                   buffer[i]=p[i];
                buffer[s]='\0';
           }
           else
               cout<<"Invalid size of array";
       }
       //FileBuffer(FileBuffer&obj1){size=obj1.size,buffer=obj1.buffer;}//Shallow copy constructor;
       FileBuffer(FileBuffer&obj)// Deep copy constructor
       {
           size=obj.size;
           if(obj.buffer!=nullptr)
           {
              buffer=(char*)calloc(size+1,sizeof(char));
              if(buffer==NULL)
              {
                  cout<<"Memory allocation is failed."<<endl;
                  exit(1);
              }
              for(int i=0;i<size;i++)
                buffer[i]=obj.buffer[i];
              buffer[size]='\0';  
           }
           else
             cout<<"Array is not created."<<endl;
       }
       ~FileBuffer(){free((void*)buffer);}
       void displayFile()
       {
           for(int i=0;i<size;i++)
              cout<<buffer[i];
           cout<<"\n\nSize of Array is "<<size;   
       }
};
int main()
{
    FileBuffer f1(10,"hello ranjana");
    f1.displayFile();
    FileBuffer f2=f1;
    f2.displayFile();
    return 0;
}