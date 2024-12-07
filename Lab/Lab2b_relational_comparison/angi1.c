#include<stdio.h>
int main(){
    int a, b;
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);

    printf("%d , %d", (a < b)*a + (a >= b)*b, (a > b)*a + (a <= b)*b);
    return 0;
}