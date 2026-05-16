//Animal Sounds(Runtime Polymorphism)
#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void sound(){
        cout<<"Animal makes sound!"<<endl;
    }
};
class Dog:public Animal{
    public:
    void sound() override{
        cout<<"Dog Barks"<<endl;
    }
};
class Cat:public Animal{
    public:
    void sound() override{
        cout<<"Meow.."<<endl;
    }
};
class Cow:public Animal{
    public:
    void sound() override{
        cout<<"mooh mooh.."<<endl;
    }
};
int main(){
    Animal* a;
    Dog d;
    Cat c;
    Cow e;
    a=&d;
    a->sound();
    a=&c;
    a->sound();
    a=&e;
    a->sound();
}