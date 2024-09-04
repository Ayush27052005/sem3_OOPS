#include<iostream>
using namespace std;

class account{
    private:
    string name;
    int acno;
    string account_type;
    int balance;

    public:
    void setDetails(string name,int acno, string account_type,int balance){
        this -> name = name;
        this -> acno = acno;
        this -> account_type = account_type;
        this -> balance = balance;
    }
    void deposit(int amt){
        // cout<<"Deposited "<<amt<<" rupees to account\n";
        balance+= amt;
    }
    void withdraw(int sum){
        if(sum>balance){
            cout<<"Insufficient balance\n";
            return;
        }
        // cout<<"Withdrawn "<<sum<<" rupees from account\n";
        balance-=sum;

    }
    void display(){
        cout<<"Account Number: "<<acno<<endl;
        cout<<"Account Holder Name: "<<name<<endl;
        cout<<"Account Type: "<<account_type<<endl;
        cout<<"Account Balance: "<<balance<<endl;
    }
};

int main(){
    account c1;
    c1.setDetails("Mehta",2411255,"Saving",25000);
    // c1.display();
    c1.deposit(15000);
    c1.withdraw(30000);
    c1.display();
    c1.withdraw(30000);
    return 0;
}