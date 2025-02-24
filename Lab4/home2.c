#include<stdio.h>
int main(){
    int n;
    int arr[100][100];
    printf("n = ");scanf("%d",&n);

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            printf("arr[%d][%d] = ", i , j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i = 0 ; i < n ; i++){
        int sumRow = 0;
        for(int j = 0 ; j < n ; j++){
            sumRow += arr[i][j];
        }
        printf("%d-r muriin niilber = %d\n", i, sumRow);
    }
    for(int j = 0 ; j < n ; j++){
        int sumCol = 0;
        for(int i = 0 ; i < n ; i++){
            sumCol += arr[i][j];
        }
        printf("%d-r baganiin niilber = %d\n", j, sumCol);
    }
    int sumRight = 0;
    int sumLeft = 0;
    for(int i = 0 ; i < n ; i++){
        sumRight += arr[i][i];
        sumLeft += arr[i][n-i-1];
    }
    printf("baruun diagonal = %d\n",sumRight);
    printf("zuun diagonal = %d\n",sumLeft);
    return 0;
}