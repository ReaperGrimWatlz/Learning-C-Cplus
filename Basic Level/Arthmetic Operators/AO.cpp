#include <iostream>
using namespace std;
int main(){
    int a,b;
    float c;
    a=5;
    b=2;
    c=a+b;
    cout<<"Sum of "<<a<< "and "<<b<<" is "<<c<<endl;
    c=a*b;
    cout<<"Product of "<<a<<" and "<<b<<" is "<<c<<endl;
    c=a/b;
    cout<<"Integer division of "<<a<<" and "<<b<<" is "<<c<<endl;
    c=(float)a/b;
    cout<<"Real division of "<<a<<" and "<<b<<" is "<<c<<endl;
    return 0;
}