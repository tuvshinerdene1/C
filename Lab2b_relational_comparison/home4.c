#include<stdio.h>
int main(){
    int arr[10];
    int num;
    //int temp = num;

    printf("num=");scanf("%d",&num);
    int temp = num;

    for(int i=0; i<10; i++){
        arr[i]=0;
    }
    
    while(temp !=0){
        arr[temp%10] = arr[temp%10]+1;
        temp /= 10;
    }
    int max = 0;
    for(int i = 1 ; i < 10 ; i++){
        if(arr[i]>arr[max]){
            max = i;
        }
    }

    printf("%d", max);
    
    return 0;

}