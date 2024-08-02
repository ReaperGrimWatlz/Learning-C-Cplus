#include <iostream>
using namespace std;
struct loopvar{
    int i=0;
    int a=0;
    int b=0;
    int end=0;
};
int factorial(int any){
    int x=any;
    int fact=1;
    for (x; x>0; x--){
        fact=fact*x;
    }
    return fact;
}
int expo(int any, int rai){
    int on=0;
    int anyl=1;
    for (on; on<rai; on++){
        anyl=anyl*any;
    }
    return anyl;
}
int main(){
    struct loopvar lvar;
    cout<<"How many times should loop run?"<<endl;
    cin>>lvar.end;
    int i=lvar.i;
    i=lvar.end;
    lvar.a=1;
    for (lvar.end; lvar.end>0; lvar.end--){
        for (lvar.a; lvar.a<=i;lvar.a++){
            cout<<expo(lvar.a,lvar.a)<<"/"<<factorial(lvar.a)<<endl;}
    }
    return 0;
}