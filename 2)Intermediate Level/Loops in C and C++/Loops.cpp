#include<iostream>
using namespace std;
int whilel(){
    int x=0;
    int y=0;
    while(x<=10){
        y=y+x++;
        cout<<y<<endl;
    }
    return 0;
}
int dwhilel(){
    int x=0;
    int y=0;
    do{
        y=y+x++;
        cout<<y<<endl;
    }
    while(x<=10);
    return 0;
}
int xforl(){
    int y=0;
    for (int x=0; x<=10; x++){
        printf("%d\n",y++);
    }
    return 0;
}
int main(){
    int a=0;
    cout<<"Enter Value 0 or 1"<<endl;
    cin>>a;
    if(a=1){
        whilel();
    }
    else if (a=0){
        dwhilel();
    }
    else if (a==2){
        xforl();}
    else
    cout<<"Not 0 or 1"<<endl;
}