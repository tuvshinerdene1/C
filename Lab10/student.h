#include<stdio.h>//-
struct Student{
    char name[50];
    char code[20];
    float grade;
} ;
typedef struct Student Student;

void read(Student a[], int size);//-
void print(Student a[], int size);//-
void findByName(Student arr[], char name[], int size );//-
void findByCode(Student arr[], char code[], int size);//-
void sortByName(Student arr[], int size);//-
void sortByCode(Student arr[], int size);//-
void sortByGrade(Student arr[], int size);//-
void hello();
