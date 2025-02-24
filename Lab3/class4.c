#include<stdio.h>
static int arr[100000];
int l = 0;

int prime(int);


int main(){
    int a, b;
    printf("a = ");scanf("%d",&a);
    printf("b = ");scanf("%d",&b);

    for(int i = a; i <= b; i++){
        if(prime(i)){
            arr[l] = i;
            l++;
        }
    }
    int count  = 0;
    for(int i = 0; i < l; i++){
        printf("%d ",arr[i]);
        count++;
    }
    printf("\n Niit = %d", count);
    return 0;
}

int prime(int n){
    int i;
    for( i = 2 ; i <= n/2 ; i++){
        if(n %i ==0)
            return 0;
    }
    return 1;
}