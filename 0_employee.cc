#include <iostream>
using namespace std;

class Employee{
private:
    int id;
    string name;
    float salary;
    string company_name;

public:
    void setId(int x){
        id = x;
    }
    void setName(string s){
        name = s;
    }
    void setSalary(float x){
        salary = x;
    }
    void companyName(string s){
        company_name = s;
    }
    int getId(){
        return id;
    }
    string getName(){
        return name;
    }
    float getSalary(){
        return salary;
    }
    string companyName(){
        return company_name;
    }
    void show(){
        cout << id << endl
             << name << endl
             << salary << endl
             << company_name << endl;
    }
};

int main(){
    Employee d1, d2;
    d1.setId(1212);
    d1.setName("Rajni Kanth");
    d1.setSalary(120000.234);
    cout << d1.getName() << endl;
    cout << d2.getId() << endl;
    d1.show();
    return 0;
}