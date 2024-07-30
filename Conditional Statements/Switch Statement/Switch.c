#include <stdio.h>
int main(){
    int a,b,sum;
    printf("Enter Numbers between 0-25\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum of a&b is %d\n",sum);
    sum=sum/10 ;
    switch (sum){
        case 0:
        printf("Sum is between 0-9 \n");
        break;
        case 1:
        printf("Sum is between 11-19 \n");
        break;
        case 2:
        printf("Sum is between 21-29 \n");
        break;
        case 3:
        printf("Sum is between 31-39 \n");
        break;
        default:
        printf("Sum out of range (i.e. less than 0 or greater than 39)\n");
    }
    return 0;
}