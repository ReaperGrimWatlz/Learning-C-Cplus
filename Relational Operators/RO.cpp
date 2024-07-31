#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    if(a>b)
        cout<<a<<" is greater than "<<b<<endl;
    else if (a<b)
        cout<<a<<" is less than "<<b<<endl;
    
    if (a>=b)
    cout<<a<<" is greater or equal to  "<<b<<endl;
    else if(a<=b)
    cout<<a<<" is less than or equal to  "<<b<<endl;
    if (a==b)
    cout<<a<<" is  equal to  "<<b<<endl;
    else if(a!=b)
    cout<<a<<" is not equal to  "<<b<<endl;
    return 0;
}