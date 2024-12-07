#include<stdio.h>
int main(){
    int a, b, c;
    printf("a = ");scanf("%d",&a);
    printf("b = ");scanf("%d",&b);
    printf("c = ");scanf("%d",&c);

    int min = (a>c&&b>c)*c + (a>b&&c>b)*b + (c>a&&b>a)*a;
    int max = (a>c&&a>b)*a + (c>a&&c>b)*c + (b>a&&b>c)*b;

    printf("min = %d\n", min);
    printf("middle = %d\n", a+b+c-min-max);    
    printf("max = %d\n", max);

    return 0;
}