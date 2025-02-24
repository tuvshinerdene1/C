#include<stdio.h>
#include<string.h>

int isVowel(char c){
    int vowels[] = {65, 69, 73, 79, 85, 89, 97, 101, 105, 111, 117, 121};
    int size = sizeof(vowels)/sizeof(vowels[0]);
    int result = 0;

    for(int i = 0 ; i < size; i++){
        if((int)c == vowels[i]){
            result = 1;
            break;
        }
    }

    return result;
}

int main(){
    char s[100];
    int max = 0;
    int word_end = 0;
    int word_start = 0;

    printf("Enter the sentence:\n");
    fgets(s, sizeof(s), stdin);

    for(int i = 0 ; i < strlen(s); i++){
        if(s[i] != ' '){
            int temp = i;
            int vowel = 0;
            while(s[temp] != ' ' && s[temp] != '\0'){
                if(isVowel(s[temp])==1){
                    vowel++;
                }
                temp++;
            }
            if(vowel > max){
                max = vowel;
                word_start = i;
                word_end = temp;
            }
        }
    }

    printf("The word with the most vowel is: ");
    for(int i = word_start ; i < word_end ; i++){
        printf("%c", s[i]);
    }

    return 0;
}