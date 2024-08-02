#include <stdio.h>
#include <stdlib.h>
int main (int argc, char **argv){
    printf("Total number of arguments are %d\n",argc);
    printf("The first argument is %s\n",argv[1]);
    while(argc--){
        printf("arguments are %s\n",*argv++);
    }
    return 0;
}