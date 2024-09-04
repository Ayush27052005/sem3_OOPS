#include<iostream>
using namespace std;
    
class electricity{
public:
    string name;
    float units,total,tem;
    void setData(float units,string name){
        this -> units=units;
        this->name = name;
        this->tem=units;
    }
    float price(){
        total = 50;
        float temUnits=units;
        if(units>300){
            total += (units-300)*0.90;
            units = 300;
        }
        if(units>100 && units <=300){
            total+= (units-100)*0.80;
            units = 100;
        }
        if(units<=100) total += units*0.60;
        if(total>300) total += (0.15)*total;
        return total;
    }
    void display(){
        cout<<"The bill of "<<name<<" for "<<tem<<" units is: "<<price()<<endl;;
    }
};

int main(){
    int j;
    
    cout<<"Enter number of customers: ";
    cin>>j;
    cout<<endl;

    electricity arr[j];
    for(int i=0;i<j;i++){
        string s;
        float n;
        cout<<"Enter the name of consumer "<<i+1<<" : ";
        cin>>s;
        cout<<"Enter the total number of units consumed: ";
        cin>>n;
        electricity cu;
        cu.setData(n,s);
        arr[i] =  cu;
        arr[i].display();
        cout<<endl;
    }
    return 0;
}