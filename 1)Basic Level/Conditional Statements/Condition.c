#include <stdio.h>
int main(){
    int a,b,sum;
    printf("Enter Numbers");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum of a&b is %d\n",sum);
    if (sum>20){
        printf("Sum is greater than 20\n");
    }else if(sum>10){
        printf("Sum is greater than 10\n");
    }else{
        printf("Sum is less than 10\n");
    }
    return 0;
}