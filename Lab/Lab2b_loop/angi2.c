#include<stdio.h>
int main(){
    int n;
    printf("n=");
    scanf("%d", &n);
    int sum = 0;
    for(int i = 2 ; i <= n ; i+=2){
        sum += i;
    }
    printf("sum=%d", sum);
    return 0;
}