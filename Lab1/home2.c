#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, d;
    printf("a=");scanf("%f",&a);
    printf("b=");scanf("%f",&b);
    printf("c=");scanf("%f",&c);
    printf("d=");scanf("%f",&d);

    float hurtwer = sqrt(pow((pow(a, 3) + b/c),2)+d);
    float huwaari = pow(d,2) - ((a*b)/c);

    printf("hurtwer = %f\n", hurtwer);
    printf("huwaari = %f\n", huwaari);

    printf("result = %.2f\n",hurtwer/huwaari*d);

    return 0;
}