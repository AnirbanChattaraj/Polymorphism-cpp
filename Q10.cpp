//Login System
#include<iostream>
using namespace std;

class User{
public:
    void login(){
        cout<<"User login"<<endl;
    }
};

class Admin : public User{
public:
    void login(){
        cout<<"Admin has full access"<<endl;
    }
};

class Customer : public User{
public:
    void login(){
        cout<<"Customer has limited access"<<endl;
    }
};

int main(){

    User u;
    Admin a;
    Customer c;

    u.login();
    a.login();
    c.login();

    
}