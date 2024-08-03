#include<stdio.h>
void increament(void);
int main(){
    increament();
    increament();
    increament();
    increament();
    return 0;
}
void increament (void){
    auto int i=0;
    printf("%d\n",i);
    i++;
}