#include <iostream>
using namespace std;
int cubev(int x){
    x=x*x*x;
    return (x);
}
int swapr(int *x, int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
    return (t);
}
int val(){
    int n=8;
    cout<<"Cube of "<<n<<" is "<<cubev(n)<<endl;
    return 0;
}
int ref(){
    int i,j;
    cout<<"Enter two numbers"<<endl;
    cin>>i>>j;
    cout<<"Before swapping "<<i<<" and "<<j<<endl;
    swapr(&i,&j);
    cout<<"After swapping "<<i<<" and "<<j<<endl;
    return 0;
}
int main(){
    val();
    ref();
}