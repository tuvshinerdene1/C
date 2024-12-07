//home1
#include<stdio.h>
#include<stdarg.h>
#include<string.h>

char* concatenate_strings(int count, ...);
int main(){
    char char1[] = "hello";
    char char2[] = "world";
    char char3[] = " C Language";

    char *result = concatenate_strings(3, char1, char2, char3);

    printf("%s", result);

	return 0;
}
char* concatenate_strings(int count, ...){
    va_list args;

    int length = 0;
    va_start(args, count);

    for(int i = 0 ; i < count ; i++){
        length += strlen(va_arg(args,char*));
    }
    va_end(args);
	

    char *result = (char*)calloc(length, sizeof(char));
    va_start(args, count);

    for(int i = 0 ; i < count ; i++){
        strcat(result, va_arg(args, char*) );
    }
    va_end(args);

    return result;
}

