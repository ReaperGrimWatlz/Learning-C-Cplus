#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of a ,b and c"<<endl;
    cin>>a>>b>>c;
    if((a>b && (a<c)))
        cout<<a<<" is greatest "<<endl;
    else if (b>c)
        cout<<b<<" is greatest "<<endl;
    else
    cout<<c<<" is greatest "<<endl;
    if ((a==0)||(b==0)||(c==0))
    cout<<"Sum of"<<a<<b<<c<<"   is zero "<<endl;
    return 0;
}