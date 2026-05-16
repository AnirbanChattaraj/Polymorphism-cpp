// Payment System (Runtime Polymorphism)

#include<iostream>
using namespace std;

class Payment{
public:
    virtual void pay(){
        cout<<"Payment processing..."<<endl;
    }
};

class UPI : public Payment{
public:
    void pay() override{
        cout<<"Payment done using UPI"<<endl;
    }
};

class CreditCard : public Payment{
public:
    void pay() override{
        cout<<"Payment done using Credit Card"<<endl;
    }
};

class PayPal : public Payment{
public:
    void pay() override{
        cout<<"Payment done using PayPal"<<endl;
    }
};

int main(){

    Payment* p;

    UPI u;
    CreditCard c;
    PayPal pp;

    p = &u;
    p->pay();

    p = &c;
    p->pay();

    p = &pp;
    p->pay();

    return 0;
}