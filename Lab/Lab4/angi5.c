#include<stdio.h>
int main(){
    int n;
    int arr[100];

    printf("n = ");scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i); scanf("%d",&arr[i]);
    }

    int i;

    for( i = 0; i < n-1 ; i++){
        if(!(arr[i] <= arr[i+1])){
            if(i>=1){
                printf("erembelegdeegui\n");
                goto exit;
            }
        }
    }

    if(i==n-1){
        if(arr[0]==arr[n-1]){
            printf("bugd tentsuu\n");
            goto exit;
        }
        printf("usuhuur erembelegdsen\n");
        goto exit;
    }

    for( i = 0; i < n-1 ; i++){
        if(!(arr[i] >= arr[i+1])){
            if(i>=1){
                
                printf("erembelegdeegui\n");
                goto exit;
            }
        }
    }

    if(i==n-1){
        if(arr[0]==arr[n-1]){
            printf("bugd tentsuu\n");
            goto exit;
        }
        printf("buurahaar erembelegdsen\n");
    }

    exit:
    return 0;

}