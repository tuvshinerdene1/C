#include<stdio.h>
#include<stdlib.h>

void input (int *arr, int size){
    for(int i = 0; i < size; i++){
        printf("arr[%d] = ", i);
        scanf("%d",&arr[i]);
    }
}

void output (int *arr, int size){
    for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int N, *arr;
    printf("N = ");scanf("%d",&N);

    arr = (int*) malloc(N*sizeof(int));

    input(arr, N);
    output(arr, N);

    free(arr);

    return 0;

}