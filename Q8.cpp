//Shape Drawing
#include<iostream>
using namespace std;
class Shape{
    public:
    void draw(){
        cout<<"List of shapes!"<<endl;
    }
};
class Circle:public Shape{
    public:
    void draw(){
        cout<<"Circular"<<endl;
    }
};
class Rectangle:public Shape{
    public:
    void draw(){
        cout<<"Rectangle"<<endl;
    }
};
class Triangle:public Shape{
    public:
    void draw(){
        cout<<"Triangle"<<endl;
    }
};
int main(){
    Shape a;
    Circle b;
    Rectangle c;
    Triangle d;
    a.draw();
    b.draw();
    c.draw();
    d.draw();
}