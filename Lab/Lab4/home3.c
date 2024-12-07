#include<stdio.h>
int main(){
    /*
    m --> 1 dawhart baih ail
    k --> ortsiin too
    n --> davhriin too
     */

    int array[10][10][10];
    int m, k , n;
    printf("dawhart baih ailiin too:");
    scanf("%d",&m);
    printf("ortsiin too:");
    scanf("%d",&k);
    printf("dawhriin too:");
    scanf("%d",&n);

    
    int number = 1;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < k; j++){
            for(int l = 0 ; l < m/k ; l++){
                array[i][j][l] = number;
                number++;
                
            }
    }
    }
   
    printf("\n");
    for(int i = n - 1; i >= 0 ; i--){
        for(int j = 0 ; j < k ; j++){
            printf("| ");
            for(int l = 0; l < m/k ; l++){
                printf("%5d ", array[i][j][l]);
            }
            printf(" | ");
        }
        printf("\n");
    }
    return 0;

}
