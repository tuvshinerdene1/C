#include<stdio.h>
int main(){
    int a, b, c;
    printf("a="); scanf("%d", &a);
    printf("b="); scanf("%d", &b);
    printf("c="); scanf("%d", &c);

    int max, min , mid;

    if(a > b && a > c){
        max = a;
        if(c>b){
            mid = c;
            min =b;
        }
        else{
            mid = b;
            min = c;
        }
    }
    if(b > a && b > c){
        max = b;
        if(a>c){
            mid = a;
            min =c;
        }
        else{
            mid = c;
            min = a;
        }
    }
    if(c > a && c > b){
        max = c;
        if(a>b){
            mid = a;
            min =b;
        }
        else{
            mid = b;
            min = a;
        }
    }
    printf("max = %d, mid =  %d, min = %d", max, mid , min);
    return 0;
}