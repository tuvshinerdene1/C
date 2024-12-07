#include<stdio.h>
int main(){
    int n, temp;
    printf("n="); scanf("%d", &n);
    temp = n;
    int sum = 0;
    while(temp!=0){
        sum = sum*10 + temp%10;
        temp /= 10;
    }
    (sum == n) ? printf("Mun") : printf("bish");
    return 0;
}