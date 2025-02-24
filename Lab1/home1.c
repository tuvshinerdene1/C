#include<stdio.h>
int main(){
    float a, h;

    printf("a="); scanf("%f", &a);
    printf("h="); scanf("%f", &h);

    printf("area=%.2f", a*h/2);
    
    return 0;
}