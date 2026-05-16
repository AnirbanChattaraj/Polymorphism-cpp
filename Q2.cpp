//Area Finder
#include<iostream>
using namespace std;
class AreaFinder {
    public:
    int area(int a){
        return a*a;
    }
    int area(int a, int b){
        return a*b;
    }
    double area(double r){
        return 3.14 * r * r;
    }
};
int main(){
    AreaFinder calc;
    cout<<"Sqaure function:"<<calc.area(2)<<endl;
    cout<<"Rectangle function:"<<calc.area(2,3)<<endl;
    cout<<"Circle function:"<<calc.area(1.6);
   
}