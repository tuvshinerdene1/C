#include<stdio.h>
int main(){
    int n;
    printf("n=");
    scanf("%d", &n);
    printf("N toonii huwaagcid ni: ");
    for(int i=1; i<=n/2; i++){
        if(n%i==0){
            printf("%d ", i);
        }
    }
    return 0;

}