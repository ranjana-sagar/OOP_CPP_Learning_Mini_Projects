
#include<iostream>
using namespace std;
#include<string.h>
class BankAccount
{
    private:
       long long int acc_num;
       char name[50],type[20];
       long long int balance;
       static char bankName[50];
    public:
        BankAccount(){acc_num=0,strcpy(name,""),strcpy(type,""),balance=0.0;}
        BankAccount(long long int an,char nm[],char tp[],long long int bl)
        {
            acc_num=(an>0)?an:0;
            strcpy(name,nm) ,strcpy(type,tp);
            balance=(bl>=0.0)?bl:0.0;
        }
       void deposit(long long int m)
       {
           if(m<=0)
              m=0;
           else
              balance+=m;   
       }
       long long int withdraw(int x)
       {
          long long int w=0;
          if(x>0&&x<=balance)
          {
                w=balance-x;
                balance-=x;
                return w;
          }
          else
              cout<<"Insufficient balance."
       }   
       void display()
       {
           cout<<"---------Account's information----------\n"<<endl;
           cout<<"Bank name: "<<bankName<<endl;
           cout<<"Account Number: "<<acc_num<<endl;
           cout<<"Account holder name: "<<name<<endl;
           cout<<"Account type: "<<type<<endl;
           cout<<"Current balance: "<<balance<<endl;
       }


};
char BankAccount::bankName[50]="State Bank of India";
int main()
{
    BankAccount a1(101,"Anjali","Saving",5000);
    a1.deposit(1500);
    a1.withdraw(2000);
    a1.display();
    return 0;
}

/*
     efined Project: BankAccount Management (No string used)
cpp
Copy
Edit
#include <iostream>
#include <cstring>
using namespace std;

class bankAccount {
    private:
        int acc_num;
        char name[100];
        char type[50];
        float balance;
        static char bankName[100];

    public:
        // Default Constructor
        bankAccount() {
            acc_num = 0;
            strcpy(name, "");
            strcpy(type, "");
            balance = 0;
        }

        // Parameterized Constructor
        bankAccount(int acc, const char n[], const char t[], float bal) {
            acc_num = acc;
            strcpy(name, n);
            strcpy(type, t);
            balance = (bal > 0) ? bal : 0;
        }

        // Deposit function
        void deposit(float amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Deposited Rs." << amount << " successfully.\n";
            } else {
                cout << "Invalid deposit amount!\n";
            }
        }

        // Withdraw function
        void withdraw(float amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawn Rs." << amount << " successfully.\n";
            } else if (amount > balance) {
                cout << "Insufficient balance!\n";
            } else {
                cout << "Invalid withdrawal amount!\n";
            }
        }

        // Display Account Info
        void display() {
            cout << "\n-------- Account Summary --------\n";
            cout << "Bank: " << bankName << endl;
            cout << "Account Number: " << acc_num << endl;
            cout << "Name: " << name << endl;
            cout << "Type: " << type << endl;
            cout << "Balance: Rs." << balance << endl;
            cout << "---------------------------------\n";
        }
};

// Define static member
char bankAccount::bankName[100] = "State Bank of OpenAI";

int main() {
    // Create object with parameterized constructor
    bankAccount acc1(101, "Anjali Verma", "Savings", 5000);

    // Deposit and Withdraw
    acc1.deposit(1500);
    acc1.withdraw(2000);
    acc1.withdraw(6000); // This should fail

    // Show Final Details
    acc1.display();

    return 0;
}
*/