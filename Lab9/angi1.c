#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int CountWords(FILE *file);
int CountSentences(FILE *file);
void FindLongestWord(FILE *file, char *longestWord);
int const SIZE = 100;

int main() {
    FILE *ptr, *result;
    
    ptr = fopen("wikiMongolia.txt", "r");
    result = fopen("result.txt", "w");
    
    if (ptr == NULL) {
        printf("Error opening a file!\n");
        exit(0);
    }
    if (result == NULL) {
        printf("Error opening result file!\n");
        exit(0);
    }
    
    int wordCount = CountWords(ptr);
    rewind(ptr);
    
    int sentenceCount = CountSentences(ptr);
    rewind(ptr);
    
    char longestWord[SIZE];
    FindLongestWord(ptr, longestWord);
    fclose(ptr);
    
    printf("Word Count: %d\n", wordCount);
    printf("Sentence Count: %d\n", sentenceCount);
    printf("Longest Word: %s\n", longestWord);
    
    fprintf(result, "Word count: %d\n", wordCount);
    fprintf(result, "Sentence count: %d\n", sentenceCount);
    fprintf(result, "Longest word: %s\n", longestWord);
    fclose(result);
    
    return 0;
}

int CountWords(FILE *ptr) {
    char c;
    int count = 0;
    int inWord = 0;
    while ((c = fgetc(ptr)) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            count++;
        }
    }
    return count;
}

int CountSentences(FILE *ptr) {
    int count = 0;
    char c;
    while ((c = fgetc(ptr)) != EOF) {
        if (c == '.' || c == '?' || c == '!') {
            count++;
        }
    }
    return count;
}

void FindLongestWord(FILE *ptr, char *longestWord) {
    char word[SIZE];
    longestWord[0] = '\0';
    
    while (fscanf(ptr, "%s", word) == 1) { 
        if (strlen(word) > strlen(longestWord)) {
            strcpy(longestWord, word);
        }
    }
}