#include<iostream>
using namespace std;

class DynamicArray
{
    private:
       int size,*p=nullptr;
    public:
       DynamicArray(){size=0;}//Default Constructor
       DynamicArray(int s)//Parameterized Constructor
       {
          if(s>0)
          {
            size=s;
            p=(int*)calloc(s,sizeof(int));
            if(p==NULL)
            {
                cout<<"Memory allocation is failed.\n";
                exit(1);
            } 
          }  
          else
            cout<<"Array size is less than zero",size=0;  
       } 
       DynamicArray(DynamicArray&obj)// Deep Copy Constructor
       {
           size=obj.size;
           if(obj.p!=nullptr)
           {
               p=(int*)calloc(size,sizeof(int));
               for(int i=0;i<size;i++)
                   p[i]=obj.p[i];
           }
       } 
       // Destructor
       ~DynamicArray()
        {
           free(p);
        }

       void setValue(int ind,int val)//instance member function
           {
               if(p!=nullptr)
               {
                  if(ind>=0&&ind<size)
                    p[ind]=val;
                  else
                    cout<<"Invalid index";  
               }
               else
                  cout<<"Array is not created!";
           }
        int getValu(int ind)
        {
            if(p!=nullptr)
            {
                  if(ind>=0&&ind<size)
                    return p[ind];
                  else
                    cout<<"Invalid index";  
            }
            else
                cout<<"Array is not created!";
            return -1;    

        } 
        void displayArray()
        {
            if(p!=nullptr)
               {
                  cout<<"-----Array's values-------"<<endl<<endl;
                  for(int i=0;i<size;i++)
                      cout<<p[i]<<" ";
               }
               else
                  cout<<"Array is not created!";
        }  
        int getSize(){return size;}

};
int main()
{
    DynamicArray obj1(5);
    obj1.setValue(0, 10);
    obj1.setValue(1, 20);
    obj1.displayArray();

    cout << "\nCopied object:\n";
    DynamicArray obj2 = obj1;  // Deep copy
    obj2.displayArray();
    
    return 0;
}
