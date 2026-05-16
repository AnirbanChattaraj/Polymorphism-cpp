//Vehicle Start System
#include<iostream>
using namespace std;
class Vehicle{
    public:
    virtual void start(){
        cout<<"Started!"<<endl;
    }
};
class Car:public Vehicle{
    public:
    void start() override {
        cout<<"Car started"<<endl;
    }
};
class Bike:public Vehicle{
    public:
    void start() override {
        cout<<"Bike started"<<endl;
    }
};
class Bus:public Vehicle{
    public:
    void start() override {
        cout<<"Bus started"<<endl;
    }
};
int main(){
    Vehicle* a;
    Car b;
    Bike c;
    Bus d;
    a=&b;
    a->start();
    a=&c;
    a->start();
    a=&d;
    a->start();
}