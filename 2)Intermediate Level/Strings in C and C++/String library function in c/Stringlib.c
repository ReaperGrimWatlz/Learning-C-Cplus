#include <stdio.h>
#include <string.h>
int strlent(){
    char arr[]="Ashwini";
    int len1= strlen(arr);
    printf("string= %s lenght= %d size= %d \n",arr,len1++,len1--);
    return 0;
}
int sstrcpy(){
    char arr1[]="Ashwini";
    char arr2[20];
    strcpy(arr2,arr1);
    printf("string orignal= %s \n",arr1);
    printf("string copy= %s \n",arr2);
    return 0;
}
int sstrcmp(){
    char arr1[]="Ice";
    char arr2[]="Cream";
    int i,j;
    i=strcmp(arr1,"Hello");
    j=strcmp(arr2,"Cream");
    printf("%d, %d\n",i,j);
    return 0;
}
int sstrcat(){
    char arr1[]="Name: ";
    char arr2[]="Ashwini";
    strcat(arr1,arr2);
    printf("%s",arr1);
    return 0;
}
int main(){
    strlent();
    sstrcpy();
    sstrcmp();
    sstrcat();
    return 0;
}