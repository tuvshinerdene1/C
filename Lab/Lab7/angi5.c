#include <stdio.h>
#include<string.h>

int main(){
    char s1[20];
    char s2[20];

    printf("s1 = ");scanf("%s", s1);
    printf("s2 = ");scanf("%s", s2);

    char sum[strlen(s1) + strlen(s2)];
    for(int i = 0; i < strlen(s1); i++){
        sum[i] = s1[i];
    }
    int j = 0;
    for(int i = strlen(s1); i < strlen(s1)+strlen(s2); i++){
        sum[i] = s2[j];
        j++;
    }

    printf("sum = %s", sum);
    return 0;
}