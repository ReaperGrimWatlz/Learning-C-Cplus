#include <stdio.h>
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
    printf("Cube of %d is %d\n",n,cubev(n));
    return 0;
}
int ref(){
    int i,j;
    printf("Enter two numbers");
    scanf("%d %d",&i,&j);
    printf("Before swapping %d and %d\n",i,j);
    swapr(&i,&j);
    printf("After swapping %d and %d\n",i,j);
    return 0;
}
int main(){
    val();
    ref();
}