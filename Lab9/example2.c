#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    FILE *file;
    file  = fopen("example1.txt", "r");
    if(file == NULL){
        printf("Error!");
        exit(1);
    }
    fscanf(file, "%d", &num);
    printf("n = %d", num);
    fclose(file);
    return 0;
}