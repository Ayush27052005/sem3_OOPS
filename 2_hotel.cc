#include<iostream>
using namespace std;

class Hotel{
    private:
    int Rno;
    string name;
    float tariff;
    int nod;
    float calc(){
        float sum = tariff*nod;
        if(sum>10000) sum*=1.05;
        return sum;
    }

    public:
    void Checkin(int Rno,string name,float tarrif,int nod){
        this->Rno = Rno;
        this->name = name;
        this->tariff = tarrif;
        this->nod = nod;
    }
    void Checkout(){
        cout<<"Room No: "<<Rno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Tariff: "<<tariff<<endl;
        cout<<"Number of Days: "<<nod<<endl;
        cout<<"Amount to be paid: "<<calc()<<endl;
    }

};

int main(){
    Hotel c1;
    c1.Checkin(101,"Zambura",5000,3);
    c1.Checkout();
    return 0;
}