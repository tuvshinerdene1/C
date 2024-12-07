#include<stdio.h>
#include<math.h>

int main(){
    float a , b , alpha;
    printf("a=");scanf("%f",&a);
    printf("b=");scanf("%f",&b);
    printf("alpha=");scanf("%f",&alpha);

    float degreeInRadian = alpha/180*3.14;

    printf("c=%.2f", sqrt(pow(b,2)+pow(a,2)-2*a*b*cos(degreeInRadian)));
    
    return 0;
}