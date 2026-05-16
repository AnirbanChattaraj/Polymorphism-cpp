//Employee Salary
#include<iostream>
using namespace std;
class Employee{
    public:
    void salary(){
        cout<<"List of salaries:"<<endl;
    }
};
class manager:public Employee{
    public:
    void salary(int x){
        cout<<"Managers:"<<x<<endl;
    }
};
class developer:public Employee{
    public:
    void salary(int y){
        cout<<"Developers:"<<y<<endl;
    }
};

int main(){
    Employee e;
    manager m;
    developer d;
    e.salary();
    m.salary(20000);
    d.salary(100000);
}