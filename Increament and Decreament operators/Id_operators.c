#include <stdio.h>
int main(){
    int a=1;
    int x=12;
    printf("value of a is %d\n",a++);
    printf("value of a is %d\n",a);
    printf("value of a is %d\n",x+a++);
    printf("value of a is %d\n",a);
    printf("value of a is %d\n",++a);
    printf("value of a is %d\n",a);
    printf("value of a is %d\n",x+++a);
    printf("value of a is %d\n",a);
    a=1;
    x=12;
    printf("value of a is %d\n",a--);
    printf("value of a is %d\n",a);
    printf("value of a is %d\n",x+a--);
    printf("value of a is %d\n",a);
    printf("value of a is %d\n",--a);
    printf("value of a is %d\n",a);
    printf("value of a is %d\n",x+--a);
    printf("value of a is %d\n",a);
    return 0;
}