#include <iostream>
using namespace std;
void pointer_demo(){
    long int num=10;
    long int *ptr;
    cout<<"Num's address: "<< &num<<endl;
    ptr= &num;
    cout<<"Pointer's Address: "<< &ptr<<endl;
    cout<<"Pointer size:  "<< sizeof(ptr)<<" Bytes"<<endl;
    cout<<"Value pointed to: "<<*ptr<<endl;
    cout<<"Pointer's Value: "<< ptr<<endl;
}
int main(){
    pointer_demo();
    return 0;
}