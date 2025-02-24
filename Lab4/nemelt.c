#include<stdio.h>
int main(){
    int A[100];
    int B[100];
    int n, m;
    
    printf("n = "); scanf("%d", &n);
    printf("m = "); scanf("%d", &m);

    for(int i=0; i<n; i++){
        printf("A[%d] = ", i);scanf("%d",&A[i]);
    }
    for(int i = 0; i<m; i++){
        printf("B[%d] = ", i);scanf("%d",&B[i]);
    }

    int count = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(A[i] == B[j]){
                printf("%d ",A[i]);
                count++;
                break;
            }
        }
    }
    if(count == 0){
        printf("Ijilhen element baihgui");
    }
    return 0;
}