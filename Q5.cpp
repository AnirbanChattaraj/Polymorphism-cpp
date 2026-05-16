//Convert Function
#include<iostream>
using namespace std;
class Converter {
public:
    void convert(int km){
        cout << km << " km = " << km * 1000 << " meters" << endl;
    }
    void convert(double m){
        cout << m << " m = " << m * 100 << " cm" << endl;
    }
    void convert(float hour){
        cout << hour << " hour = " << hour * 60 << " minutes" << endl;
    }
};

int main(){
    Converter c;
    c.convert(5);      
    c.convert(2.5);    
    c.convert(1.5f);   
    
}