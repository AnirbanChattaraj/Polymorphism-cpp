//Animal Sounds
#include<iostream>
using namespace std;
class Animal{
    public:
    void sound(){
        cout<<"Animal makes sound!"<<endl;
    }
};
class Dog:public Animal{
    public:
    void sound(){
        cout<<"Dog Barks"<<endl;
    }
};
class Cat:public Animal{
    public:
    void sound(){
        cout<<"Meow.."<<endl;
    }
};
class Cow:public Animal{
    public:
    void sound(){
        cout<<"mooh mooh.."<<endl;
    }
};
int main(){
    Animal a;
    Dog b;
    Cat c;
    Cow d;
    a.sound();
    b.sound();
    c.sound();
    d.sound();
}