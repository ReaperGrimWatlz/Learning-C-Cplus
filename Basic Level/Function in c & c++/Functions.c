#include <stdio.h>
int add(int a , int b){
    int c=a+b;
    return c;
}
int main(){
    int ax;
    ax=10;
    int bx;
    bx=20;
    float cx;
    cx=add(ax,bx);
    int dx;
    printf("Enter Number");
    scanf("%d",&dx);
    cx=add(cx,dx);
    printf("The sum is %f \n",cx);
    return 0;
}