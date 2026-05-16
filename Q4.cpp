//Student Details
#include<iostream>
using namespace std;
class Student{
    public:
    void display(){
        cout<<"Hello"<<endl;
    }
    void display(string n){
        cout<<"Name:"<<n<<endl;
    }
    void display(string n,int a){
        cout<<"Name:"<<n<<"|Age:"<<a;
    }
};
int main(){
    Student s;
    s.display();
    s.display("Anirban Chattaraj");
    s.display("Anirban Chattaraj", 24);
}