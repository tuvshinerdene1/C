#include<stdio.h>
int main(){
    int a, b, c;
    printf("a=");scanf("%d",&a);
    printf("b=");scanf("%d",&b);
    printf("c=");scanf("%d",&c);

    a == b == c && printf("Zuw gurwaljin");
    a == b && a != c && b != c && printf("Adil hajuut\n");
    b == c && a != c && a != b && printf("Adil hajuut\n");
    a == c && a != b && b != c && printf("Adil hajuut\n");
    a != b && a != c && b !=c && printf("eldew talt\n");
    
    return 0;
}