#include<stdlib.h>
#include<stdio.h>
#include "student.h"

int main(){
    int size;
    printf("Enter number of students: ");
    scanf("%d", &size);

    Student *arr = (Student *)malloc(size*sizeof(Student));

    while(1){
        int choice;
        printf("1. read, 2.print, 3.findByName, 4.findByCode, 5.sortByName, 6.sortByCode, 7.sortByGrade , -1 to exit : ");
        scanf("%d", &choice);
        if(choice == 1){
            read(arr, size);
        }
        else if(choice == 2){
            print(arr, size);
        }
        else if(choice == 3){
            char name[20];
            printf("Enter the name: ");
            scanf("%s", &name);
            findByName(arr, name, size);
        }
        else if(choice == 4){
            char code[20];
            printf("Enter the code: ");
            scanf("%s", &code);
            findByCode(arr, code, size);
        }
        else if(choice == 5){
            printf("Sorted by name!!\n");
            sortByName(arr, size);
        }
        else if(choice == 6){
            printf("Sorted by code!!\n");
            sortByCode(arr, size);
        }
        else if(choice == 7){
            printf("Sorted by grade!!\n");
            sortByGrade(arr, size);
        }
        else if (choice == -1){
            break;
        }
        else{
            printf("Invalid input!!\n");
        }
    }
    free(arr);
    return 0;
}