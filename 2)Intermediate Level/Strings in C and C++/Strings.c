#include <stdio.h>
#include <string.h>
int decl(){
    char strname[30];
    printf("Enter the string\n");
    scanf("%[^\n]s", strname);
    printf("The string is %s\n", strname);
    return 0;
}
int initial(){
    char strname[30]="Spoken Tutorial";
    printf("The string is %s\n", strname);
    return 0;
}
int main()
{
    decl();
    initial();
    return 0;
}