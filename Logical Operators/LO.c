#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a ,b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b && (a<c)))
        printf("%d is greatest \n",a);
    else if (b>c)
        printf("%d is greatest \n",b);
    else
    printf("%d is greatest \n",c);
    if ((a==0)||(b==0)||(c==0))
    printf("Sum of %d, %d, %d  is zero \n",a,b,c);
    return 0;
}