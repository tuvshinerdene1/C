#include<stdio.h>
int main(){
    int a, b;
    printf("a = ");scanf("%d",&a);
    printf("b = ");scanf("%d",&b);

    if(b>a){
        int temp = a;
        a = b;
        b = temp;
    }
    int max = 1;
    for(int i = 2; i <= b; i++){
        if(a%i==0&&b%i==0){
            max = i;
        }
    }
    printf("max=%d",max);

    return 0;
}