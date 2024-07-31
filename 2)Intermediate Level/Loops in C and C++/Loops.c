#include<stdio.h>
int whilel(){
    int y=0;
    int x=0;
    while(x<=10){
        y=y+x++;
        printf("%d\n",y);
    }
    return 0;
}
int xforl(){
    int y=0;
    for (int x=0; x<=10; x++){
        printf("%d\n",y++);
    }
    return 0;
}
int dwhilel(){
    int y=0;
    int x=0;
    do{
        y=y+x++;
        printf("%d\n",y);
    }
    while(x<=10);
    return 0;
}
int main(){
    int a=0;
    printf("Enter Value of a 0 or 1 or 2\n");
    scanf("%d",&a);
    if(a==1){
        dwhilel();
    }else if (a==0) {
        whilel();
    }
    else if (a==2){
        xforl();}
    else
    printf("Not  0 or 1 or 2 ");
}