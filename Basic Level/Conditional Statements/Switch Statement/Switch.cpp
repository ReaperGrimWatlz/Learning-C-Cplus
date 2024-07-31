#include <iostream>
using namespace std;
int main(){
    int a,b,sum;
    cout<<"Enter Numbers between 0-24"<<endl;
    cin>>a>>b;
    sum=a+b;
    cout<<"Sum of a, b is "<<sum<<endl;
    sum=sum/10 ;
    switch (sum){
        case 0:
        cout<<"Sum is between 0-9"<<endl;
        break;
        case 1:
        cout<<"Sum is between 11-19"<<endl;
        break;
        case 2:
        cout<<"Sum is between 21-29"<<endl;
        break;
        case 3:
        cout<<"Sum is between 31-39"<<endl;
        break;
        default:
        cout<<"Sum out of range (i.e. less than 0 or greater than 39)"<<endl;
    }
    return 0;
}