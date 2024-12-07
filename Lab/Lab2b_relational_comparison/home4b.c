#include<stdio.h>
int main(){
    int num;
    printf("num=");scanf("%d",&num);

    int max = 0;
    int maxNum;
    for(int i=0; i<=9; i++){
        int temp = num;
        int count = 0;
        while(temp!=0){
            if(i == temp%10){
                count++;
            }
            temp /= 10;
        }
        if(count > max){
            maxNum = i;
        }

    }
    printf("max=%d\n", maxNum);
    return 0;
}
