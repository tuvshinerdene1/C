#include<stdio.h>
#include<stdlib.h>

int count = 0;

int *find(int *data, int size, int x, int *result){
    for(int i = 0 ; i < size ; i++){
        if(*(data + i) == x){
            *(result + count) = x;
            count++;
        }
    }


    if(count == 0){
        return NULL;
    }
    return result;
}

int main(){
    int *data, size, x, *result;

    printf("size = ");scanf("%d",&size);

    data = calloc(size, sizeof(int));
    result = calloc(size, sizeof(int));

    for(int i=0; i<size; i++){
        printf("[%d] = ", i);
        scanf("%d", (data+i));
    }

    printf("x = ");scanf("%d",&x);

    if(find(data, size, x, result) != NULL){
        for(int i = 0; i < count; i++){
            printf("%d",result+i);
            printf("(%d)\n", *(result+i));
        }
    }
    else{
        printf("0");
    }

    free(result);
    free(data);
    return 0;

}