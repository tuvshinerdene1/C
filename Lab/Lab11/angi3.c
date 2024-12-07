#include "sort.h"

int main(){
    FILE *fptr = NULL;
    fptr = fopen("numbers.txt", "r");
    if(!fptr){
        printf("input file error!\n");
        exit(1);
    }

    int arr[200];
    for(int i=0; i<200; i++){
        fscanf(fptr, "%d", &arr[i]);
    }
    fclose(fptr);
    count_sort(arr, 200);
    for(int i =0 ; i < 200 ; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}