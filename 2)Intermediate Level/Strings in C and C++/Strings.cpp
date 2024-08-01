#include <iostream>
#include <string.h>
using namespace std;
int decl(){
    string strname;
    cout<<"Enter the string\n";
    getline(cin, strname);
    cout<<"The string is "<< strname<< endl;
    return 0;
}
int initial(){
    string strname="Spoken Tutorial";
    cout<<"The string is "<<strname<<endl;
 return 0;
}
int main()
{
    decl();
    initial();
    return 0;
}