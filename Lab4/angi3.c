#include<stdio.h>
int main(){
    int A[100];
    int B[100];
    int C[200];

    int n , m;
    printf("n = ");scanf("%d",&n);
    printf("m = ");scanf("%d",&m);

    for(int i=0; i<n; i++){
        printf("A[%d]=",i);scanf("%d",&A[i]);
    }
    for(int i=0; i<m; i++){
        printf("B[%d]=",i);scanf("%d",&B[i]);
    }

    for(int i=0; i<n; i++){
        C[i] = A[i];
    }
    for(int i = 0; i < m ; i++){
        C[i+n] = B[i]; 
    }

    for(int i = 0; i < n + m; i++){
        printf("C[%d] = %d\n", i, C[i]);
    }

    return 0;
}