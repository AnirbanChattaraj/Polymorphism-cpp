//Print Data
#include<iostream>
using namespace std;
class Print{
    public:
    void show(int x){
        cout<<x<<endl;
    }
    void show(string y){
        cout<<y<<endl;
    }
    void show(float f){
        cout<<f<<endl;
    }
};
int main(){
    Print s;
    s.show(2);
    s.show("Anirban Chattaraj");
    s.show(5.4f);
}