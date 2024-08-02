#include <stdio.h>
int main(){
    typedef unsigned int uint;
    uint n,n1;
    uint rev=0;
    uint rem;
    printf("Enter any three digit number");
    scanf("%u",&n);
    n1=n;
    while (n>0){
        rem=n%10;
        rev= rev*10+rem;
        n=n/10;
    }
    printf("Reverse of number is %u\n",rev);
    return 0;
}