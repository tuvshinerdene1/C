#include<stdio.h>
#include<math.h>
int main(){
    float a , b , c;

    printf("a=");scanf("%f", &a);
    printf("b=");scanf("%f", &b);
    printf("c=");scanf("%f", &c);

    float D = pow(b,2) - 4*a*c;

    printf("x1=%.2f\n", (-b+sqrt(D))/(2*a));
    printf("x2=%.2f", (-b-sqrt(D))/(2*a));

    return 0;
}