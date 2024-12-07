#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>
struct Student{
    char name[30];
    int age;
    float gpa;
};
typedef struct Student Student;

void bubble(Student a[], int size);
void selection(Student a[], int size);
void insertion(Student a[], int size);
void count_sort(int a[], int size);