#include <iostream>
using namespace std;
int main(){
    int i,j;
    int num1[3][4],num2[3][4];
    cout<<"Enter the elements of 3x4 array num1"<<endl;
    for (i=0; i<3; i++){
        for(j=0;j<4; j++){
        cin>>num1[i][j];
        }
    }
    cout<<"Enter the elements of 3X4 array num2 "<<endl;
    for (i=0; i<3; i++){
        for(j=0;j<4; j++){
        cin>>num2[i][j];
        }
    }
    cout<<" the elements of 3x4 array num1"<<endl;
    for (i=0; i<3; i++){
        for(j=0;j<4; j++){
            cout<<num1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<" the elements of 3x4 array num2"<<endl;
    for (i=0; i<3; i++){
        for(j=0;j<4; j++){
            cout<<num2[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"The sum of num1 and num2 is "<<endl;
    for (i=0; i<3; i++){
        for(j=0;j<4; j++){
            cout<<num1[i][j]+num2[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}