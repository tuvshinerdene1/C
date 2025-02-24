#include<stdio.h>

int is_even(int);
void max(int, int[]);

int main(){
    int n;
    printf("n=");scanf("%d", &n);
    for(int i = 1 ; i <= n ; i++){
        if(!is_even(i)){
            printf("%d ", i);
        }
    }
    
    printf("\n");

    int arr[10];
    for(int i = 0 ; i < 10 ; i++){
        printf("[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    max(10, arr);
    return 0;
}
int is_even(int num){
    if(num%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
void max(int size, int arr[]){
    int maxNumber = 0;
    for(int i = 1; i < size; i++){
        if(arr[i]>arr[maxNumber]){
            maxNumber = i;
        }
    }
    printf("%d", arr[maxNumber]);
    return;
}