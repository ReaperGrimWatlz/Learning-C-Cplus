#include <stdio.h>
void pointer_demo(){
    long int num=10;
    long int *ptr;
    printf("Num's address: %p\n", &num);
    ptr= &num;
    printf("Pointer's Address: %p\n", &ptr);
    printf("Pointer size: %ld bytes\n", sizeof(ptr));
    printf("Value pointed to: %ld\n",*ptr);
    printf("Pointer's Value: %p\n", ptr);
}
void main(){
    pointer_demo();
}