#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Data{
    char name[12];
    int grade;
};
typedef struct Data Data;

int main(){
    Data a[73];
    char searchCode[12];
    int c;
    int points;

    FILE *fp = NULL;
    fp = fopen("data.bin","rb");
    if(!fp){
        printf("Input file error!\n");
        exit(1);
    }
    fread(a, sizeof(Data), 73, fp);
    for(int i = 0 ; i < 73 ; i++){
        printf("%s %d\n", a[i].name, a[i].grade);
    }
    fclose(fp);
    while(1){

        printf("1.Search by code 2.Search by points? -1 to exit:");
        scanf("%d", &c);
        if(c == 1){
            printf("Enter the student code: ");
            scanf("%s", searchCode);
            if(strcmp(searchCode, "-1")==0){
                break;
            }
            for(int i = 0 ; i < 73 ; i++){
                if(strcmp(a[i].name, searchCode)==0){
                    printf("%s\t%d\n", a[i].name, a[i].grade);
                    break;
                }
            }
        }
        else if(c == 2){
            printf("Enter the point: ");
            scanf("%d", &points);
            for(int i = 0 ; i < 73; i++){
                if(a[i].grade == points){
                    printf("%s\t%d\n", a[i].name, a[i].grade);
                }
            }
        }
        else if(c==-1){
            break;
        }
        else{
            printf("invalid input.\n");
        }
        
    }
    return 0;
}