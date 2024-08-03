#include <stdio.h>
/*int main(){
    FILE *fp;
    fp=fopen("file.txt","w");
    fprintf(fp,"Welcome to the new file\n");
    fprintf(fp,"This is an test example\n");
    fclose(fp);
    return 0;
}*/
int main(){
    FILE *fp;
    fp=fopen("a.out","r");
    char c;
    if (fp==NULL){
    printf("File doesn't exist");
}
    else{
        do
        {
            c=getc(fp);
            putchar(c);
        }
        while(c !=EOF);
        fclose(fp);
    }
    return 0;
}