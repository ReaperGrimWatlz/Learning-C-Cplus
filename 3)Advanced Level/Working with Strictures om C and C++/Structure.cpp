#include <iostream>
using namespace std;
struct student{
    int eng;
    int maths;
    int science;
};
int main(){
    int total;
    struct student stud;
    stud.eng=75;
    stud.maths=70;
    stud.science=65;
    total= stud.eng + stud.maths + stud.science;
    cout<<"Total is: "<<total<<endl;
    return 0;
}