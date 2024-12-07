#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    FILE *file;
    file = fopen("example1.txt", "w");
    if(file == NULL){
        printf("Error!");
        exit(1);
    }
    printf("Enter num: ");
    scanf("%d", &num);
    fprintf(file, "%d", num);
    fclose(file);
    return 0;
}