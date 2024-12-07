#include<stdio.h>
int main(){
    int arr[100];
    int n , x;
    printf("n = ");scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("Arr[%d] = ", i);scanf("%d",&arr[i]);
    }
    printf("x = ");scanf("%d",&x);
    int count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]==x){
            printf("%d ",i);
            count++;
        }
    }
    if(count==0){
        printf("-1");
    }
    return 0;
}