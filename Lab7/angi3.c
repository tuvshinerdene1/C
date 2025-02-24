#include<stdio.h>
#include<string.h>

int main(){
    char s1[100];
    char s2[100];

    printf("first string : ");gets(s1);
    printf("second string : ");gets(s2);


    if(strlen(s1)!= strlen(s2)){
        printf("not same words");
        goto exit;
    }

    for(int i = 0; i < strlen(s1); i++){
        if(*(s1 + i) != *(s2 + i)){
            printf("not same words");
            goto exit;
        }
    }
    printf("same words");

    exit:
    return 0;
}