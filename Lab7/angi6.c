#include<stdio.h>
#include<string.h>

int main(){
    char sentence[100];

    printf("Enter the sentence :"); gets(sentence);

    for(int i = 0; i < strlen(sentence); i++){
        if(sentence[i] == ' '){
            printf("\n");
            continue;
        }
        printf("%c", sentence[i] );
    }

    return 0;
}