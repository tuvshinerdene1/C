#include<stdio.h>
#include<string.h>

int main(){

    char s[100];
    int vowels[] = {65, 69, 73, 79, 85, 89, 97, 101, 105, 111, 117, 121};
    int size = sizeof(vowels)/sizeof(vowels[0]);
    printf("Enter the string:\n");
    gets(s);

    int count = 0;

    for(int i = 0 ; i < strlen(s) ; i++){
        for(int j = 0 ; j < size; j++){
            if((int)s[i]==vowels[j]){
                count++;
                break;
            }
        }
    }

    printf("count = %d\n", count);
    return 0;

}