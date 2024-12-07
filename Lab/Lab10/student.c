#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include "student.h"



void read(Student a[], int size){
    for(int i = 0 ; i < size ; i++){
        printf("Student name: ");
        scanf("%s", &a[i].name);
        printf("Student code: ");
        scanf("%s", &a[i].code);
        printf("Student Grade: ");
        scanf("%f", &a[i].grade);
    }
}
void hello(){
    printf("Hello!");
}
void print(Student *a, int size){
    for(int i = 0 ; i < size; i++){
        printf("Student name: %s\n", a[i].name);
        printf("Student code: %s\n", a[i].code);
        printf("Student grade: %f\n", a[i].grade);
    }
}
void findByName(Student arr[], char name[], int size ){
    bool found = false;
    for(int i = 0 ; i < size; i++){
        if(strcmp(arr[i].name, name) == 0){
            printf("Student name: %s\n", arr[i].name);
            printf("Student code: %s\n", arr[i].code);
            printf("Student grade: %f\n", arr[i].grade);
            found = true;
            break;
        }
    }
    if(!found){printf("Student cannot be found\n");}
}
void findByCode(Student arr[], char code[], int size){
    bool found = false;
    for(int i =0 ; i < size ; i++){
        if(strcmp(arr[i].code, code) == 0){
            printf("Student name: %s\n", arr[i].name);
            printf("Student code: %s\n", arr[i].code);
            printf("Student grade: %f\n", arr[i].grade);
            
            found = true;
            break;
        }
    }
    
    if(!found){printf("Student cannot be found\n");}
}
void sortByName(Student arr[], int size){
    for(int i = 0 ; i < size-1; i++){
        int min_idx = i;
        for(int j = i+1; j<size;j++){
            if(strcmp(arr[min_idx].name, arr[j].name)>0){
                min_idx = j;
            }
        }
        Student temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
void sortByCode(Student arr[], int size){
    for(int i = 0 ; i < size-1; i++){
        int min_idx = i;
        for(int j = i+1; j<size;j++){
            if(strcmp(arr[min_idx].code, arr[j].code)>0){
                min_idx = j;
            }
        }
        Student temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
void sortByGrade(Student arr[], int size){
    for(int i = 0 ; i < size-1; i++){
        int max_idx = i;
        for(int j = i+1; j<size;j++){
            if(arr[max_idx].grade < arr[j].grade){
                max_idx = j;
            }
        }
        Student temp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] = temp;
    }
}