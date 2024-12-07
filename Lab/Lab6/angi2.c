#include<stdio.h>
#include<stdlib.h>

void read(int *data, int size){
    for(int i = 0 ; i < size ; i++){
        printf("[%d] = ",i);
        scanf("%d",data+1);
    }
}

int main(){
    int *arr, size;
    printf("size = ");scanf("%d",&size);

    arr = (int*) malloc(size * sizeof(int));

    read(arr , size);

    free(arr);
    return 0;
}