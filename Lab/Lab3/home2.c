#include<stdio.h>

int digit_sum(int);

int main(){
    int N;
    printf("N=");scanf("%d",&N);

    for(int i = 1; i <= N; i++){
        if(i%digit_sum(i) == 0){
            printf("%d ", i);
        }
    }
    return 0;
}

int digit_sum(int num){
    int sum = 0;
    while(num > 0){
        sum += num%10;
        num /= 10;
    }
    return sum;
}