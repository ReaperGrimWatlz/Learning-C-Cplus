#include<stdio.h>
int x=10;
int main(){
    register int y;
    for (y=1;y<=5;y++){
        printf("Value stored on register memory %d\n",y);
    }
    return 0;
}