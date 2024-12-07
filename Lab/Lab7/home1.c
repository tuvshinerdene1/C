#include<stdio.h>
#include<string.h>

int main(){
    char sentence[100];
    int count = 0;
    
    printf("Enter the sentence:");
    gets(sentence);
    for(int i = 0; i < strlen(sentence); i++){
        if(sentence[i]!=' '&& (sentence[i+1]==' '||sentence[i+1]=='\0')){
            count = count + 1;
        }
    }
    
    printf("%d", count);
    
    return 0;
} 