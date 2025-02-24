#include<stdbool.h>
#include "array.h"

int* createArray(int n){
    //end heregjuulne
    int *ptr = (int*)malloc(n*sizeof(int));
    return ptr;
}
void read(int a[], int n){
//end heregjuulne
    for(int i = 0 ; i<n ; i++){
        printf("[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void print(int a[], int n){
//end heregjuulne
    for(int i = 0 ; i < n ; i++){
        printf("[%d] = %d, ",i,a[i]);
    }
}
void deleteArray(int *a){
//end heregjuulne
    free(a);
}
int minA(int a[], int n){
//end heregjuulne
    printf("\n");
    int min = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    return min;
}
int maxA(int a[], int n){
//end heregjuulne
    printf("\n");
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
    
}
float average(int a[], int n){
//end heregjuulne
    printf("\n");
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += a[i];
    }
    float avg = (float)sum / n;
    return avg;
}
int searchA(int a[], int n, int Svalue){//haisan utga oldvol tuunii indexiig butsaana, oldohgui bol -1
//end heregjuulne
    for(int i = 0 ; i < n ; i++){
        if(a[i] == Svalue){
            return i;
        }
    }
    return -1;
}
void sortA(int a[], int n){
//end heregjuulne
    bool swapped;
    for(int i = 0; i < n-1; i++){
        swapped = false;
        for(int j = 0 ; j <n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}
