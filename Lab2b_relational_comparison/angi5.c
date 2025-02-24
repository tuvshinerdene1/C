#include<stdio.h>
int main(){
    int n;
    printf("n=");scanf("%d",&n);

    if(n % 400 ==0 || n%4==0 && n%100!=0){
        printf("Undur jil mun");
    }
    else{
        printf("Undur jil bish");
    }
    return 0;
}