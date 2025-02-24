#include<stdio.h>
int main(){
    int n;
    printf("n=");
    scanf("%d", &n);
    int sum = 0;
    while(n != 0){
        sum += n%10;
        n /= 10;
    }
    printf("digit_sum=%d", sum);
    return 0;
}