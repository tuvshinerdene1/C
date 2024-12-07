#include<stdio.h>
int main(){
    int a,b;
    printf("a=");scanf("%d",&a);
    printf("b=");scanf("%d",&b);
    
    int c;
    c = a + b;
    printf("a+b=%d\n",c);

    c = a - b;
    printf("a-b=%d\n",c);

    c = a*b;
    printf("a*b=%d\n",c);

    float d = a/(1.0*b);
    printf("a/b=%.2f\n",d);

    c = a%b;
    printf("a%%b=%d", c);
    
    return 0;
}