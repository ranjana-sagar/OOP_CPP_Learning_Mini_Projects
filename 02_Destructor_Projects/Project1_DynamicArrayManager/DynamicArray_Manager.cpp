#include<iostream>
using namespace std;

class DynamicArray
{
    private:
        int size,*p=NULL;
    public:
        DynamicArray(){size=0,p=nullptr;}
        DynamicArray(int s)
        {
            if(s>0)
            {
                size=s;
                p=(int*)calloc(size,sizeof(int));
                if(p==NULL)
                {
                   cout<<"Memory allocation is failed!"<<endl;
                   exit(0);
                }   
            }
            else{
                size=0;
                cout<<"Provide correct size of array"<<endl;
                exit(1);
            }
        } 
        void insertValue(int ind,int val)
        {
            if(p!=NULL)
            {
                if(ind>=0&&ind<size)
                   p[ind]=val;
                else
                   cout<<"Index is not valid for array."<<endl;  
            }
            else
                cout<<"Array does not exit."<<endl;
        }
        void resizeArray(int nSize)
        {
            int*p1=NULL;
            if(nSize>0)
            {
               p1=(int*)realloc(p,nSize);
               if(p1!=NULL)
               {
                   p=p1;
                   size=nSize;
               }
               else
               {
                   cout<<"Memory allocation is failed."<<endl;
                   exit(0);
               }
            }   
        }
        void showArray()
        {
            if(p!=NULL)
            {
                for(int i=0;i<size;i++)
                  cout<<p[i]<<" ";
            }
            else
                cout<<"Array does not exist.";
        }
        int getSize(){ return size;}
        ~DynamicArray()
        {
            if(p!=NULL)
               free((void*)p);
        }
};

int main()
{
    DynamicArray b1(5);
    b1.insertValue(4,56);
    b1.showArray();
   return 0;
}
