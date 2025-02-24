#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, d;
    
    printf("a=");scanf("%d",&a);
    printf("b=");scanf("%d",&b);
    printf("c=");scanf("%d",&c);
    printf("d=");scanf("%d",&d);

    int sum = a+b;
    printf("result = %f",sqrt(sum*sum+d)/c);

    return 0;
}