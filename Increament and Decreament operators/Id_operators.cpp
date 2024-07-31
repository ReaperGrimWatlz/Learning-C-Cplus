#include <iostream>
using namespace std;
int main(){
    int a=1;
    int x=12;
    cout<<"value of a is "<<a++<<endl;
    cout<<"value of a is "<<a<<endl;
    cout<<"value of a is "<<x+a++<<endl;
    cout<<"value of a is "<<a<<endl;
    cout<<"value of a is "<<++a<<endl;
    cout<<"value of a is "<<a<<endl;
    cout<<"value of a is "<<x+++a<<endl;
    cout<<"value of a is "<<a<<endl;
    a=1;
    x=12;
    cout<<"value of a is "<<a--<<endl;
    cout<<"value of a is "<<a<<endl;
    cout<<"value of a is "<<x+a--<<endl;
    cout<<"value of a is "<<a<<endl;
    cout<<"value of a is "<<--a<<endl;
    cout<<"value of a is "<<a<<endl;
    cout<<"value of a is "<<x+--a<<endl;
    cout<<"value of a is "<<a<<endl;
    return 0;
}