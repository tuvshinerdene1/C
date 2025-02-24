#include<stdio.h>
#include<string.h>

int main(){
    char sentence[100];
    char word[100];
    int result[100];

    printf("Enter the sentence :");
    //fgets(sentence, sizeof(sentence), stdin);
    gets(sentence);

    printf("Enter the word :");
    //fgets(word, sizeof(word), stdin);
    gets(word);

    //sentence[strcspn(sentence, "\n")] = 0;
    //word[strcspn(word, "\n")] = 0;


    int sentence_size = strlen(sentence);
    int word_size = strlen(word);

    int result_num = 0;
    for(int i = 0; i <= (sentence_size-word_size); i++){
        int j = 0;
        if(sentence[i]==word[j]){
            for(j = 1; j < word_size; j++){
                if(sentence[i+j] != word[j]){
                    break;
                }
            }
        }
        if(j == word_size){
            result[result_num] = i;
            result_num++;
        }
    }
    if(result_num == 0){
        printf("-1");
    }
    else{
        for(int i = 0; i < result_num; i++){
            printf("%d) %d - %d\n", i+1, result[i], result[i]+strlen(word));
        }
    }
    return 0;

}