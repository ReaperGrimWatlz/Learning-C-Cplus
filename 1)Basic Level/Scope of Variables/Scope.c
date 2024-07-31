#include <stdio.h>
int a=2;
int b=5;
void add(){
    int sum;
    sum=a+b;
    printf("Sum of a & b is  %d\n",sum);
}
int main(){
    add();
    return 0;
}