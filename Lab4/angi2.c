#include<stdio.h>
int main(){
    int arr[100];
    int size;
    printf("size = ");scanf("%d",&size);
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = size-1; i >= 0; i--){
        printf("%d ",arr[i]);
    }
    return 0;
}