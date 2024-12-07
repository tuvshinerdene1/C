#include<stdio.h>

int func(int);

int main(){
    int n;
    printf("n="); scanf("%d", &n);

    printf("%d", func(n));
    return 0;
}

int func(int n){
    int sum = 0;
    if(n>0){
        int temp = n*n;
        sum += temp + func(n-1);
    }
    else{
        return sum;
    }
}