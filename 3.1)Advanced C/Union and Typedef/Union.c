#include <stdio.h>
union student{
    int eng;
    int maths;
    int science;
};
int main(){
    int total;
    union student stud;
    stud.eng=82;
    stud.maths= 70;
    stud.science=76;
    total=stud.eng+stud.maths+stud.science;
    printf("Total: %d\n",total);
    return 0;
}