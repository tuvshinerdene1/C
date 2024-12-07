#include<stdio.h>
#include<stdlib.h>

void max_min(int *data, int size, int *max, int *min){
   
    for(int i = 0; i < size; i++){
        printf("[%d] = ", i);
        scanf("%d", data+i);
    }

    max = data;
    min = data;

    for(int i = 1 ; i < size ; i++){
        if(*(data+i) > *max){
            max = (data+i);
            continue;
        }
        if(*(data+i) < *min){
            min = (data+i);
        }
    }
    printf("max = %d, min = %d\n", *max, *min);
}


int main(){
    int size, *data;
    int *maxNum, *minNum;

    printf("size = "); scanf("%d", &size);

    //data = (int*)malloc(size*sizeof(int));
    data =  malloc(size*sizeof(int));

    max_min(data, size, maxNum, minNum);

    free(data);
    return 0;
}