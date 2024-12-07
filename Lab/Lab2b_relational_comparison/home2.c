#include<stdio.h>
int main(){
    float point;
    printf("point= "); scanf("%f", &point);
    float grade = point*100/35;
    if(grade >= 90) printf("A\n");
    else if (grade >= 80 && grade < 90) printf("B\n");
    else if (grade >= 70 && grade < 80) printf("C\n");
    else if (grade >= 60 && grade < 70) printf("D\n");
    else printf("F\n");
    return 0;
}