#include <iostream>
using namespace std;
int main(){
    int a,b,sum;
    cout<<"Enter Numbers";
    cin>>a>>b;
    sum=a+b;
    cout<<"Sum of a&b is "<<sum<<endl;
    if (sum>20){
        cout<<"Sum is greater than 20"<<endl;
    }else if(sum>10){
        cout<<"Sum is greater than 10"<<endl;
    }else{
        cout<<"Sum is less than 10"<<endl;
    }
    return 0;
}