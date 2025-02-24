#include<stdio.h>
int main(){
    int num;
    printf("num="); scanf("%d", &num);
    if(num%2==0){
        if(num%10 == 0&&num%4==0){
            printf("10 ba 4t zerg huwaagdana");
        }
        else{
            printf("10 ba 4t zerg huwaagdahgui");
        }
    }
    else{
        if(num%3==0&&num%7==0){
            printf("3 ba 7t zerg huwaagdana");
        }
        else{
            printf("3 ba 7t zerg huwaagdahgui");
        }
    }
    return 0;
}