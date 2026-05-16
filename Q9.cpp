//Vehicle Start
#include<iostream>
using namespace std;
class Vehicle{
    public:
    void start(){
        cout<<"Started!"<<endl;
    }
};
class Car:public Vehicle{
    public:
    void start(){
        cout<<"Car started"<<endl;
    }
};
class Bike:public Vehicle{
    public:
    void start(){
        cout<<"Bike started"<<endl;
    }
};
class Bus:public Vehicle{
    public:
    void start(){
        cout<<"Bus started"<<endl;
    }
};
int main(){
    Vehicle a;
    Car b;
    Bike c;
    Bus d;
    a.start();
    b.start();
    c.start();
    d.start();
}