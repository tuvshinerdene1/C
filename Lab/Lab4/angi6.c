#include<stdio.h>
int main(){
    int arr[100][100];
    int n , m , x;
    printf("n = ");scanf("%d",&n);
    printf("m = ");scanf("%d",&m);

    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            printf("arr[%d][%d] = ", i , j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("x = ");scanf("%d",&x);
    int count = 0;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j]==x){
                printf("%d muriin %d bagana\n", i, j);
                count++;
            }
        }
    }
    if(count==0){
        printf("-1");
    }
    return 0;
}