#include<stdio.h>
int main(){
    int n; 
    int arr[100][100];
    printf("n = "); scanf("%d", &n);

    for(int i = 0 ; i < n ; i++){
        arr[i][0] = i+1;
        int temp = 1;
        for(int j = 1 ; j < n ; j++){
            arr[i][j] = arr[i][0]+temp;
            if(arr[i][j] > n){
                //arr[i][j] = n - (arr[i][j]-n);
                arr[i][j] = 2*n - arr[i][j];
            }
            temp = temp + 1 ;
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j<n ; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}