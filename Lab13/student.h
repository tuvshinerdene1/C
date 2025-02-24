#include <stdio.h>
#include <string.h>

struct Student{
    char fname[20];
    int age;
    float gpa;
};
typedef struct Student Student;

void print_students(Student a[], int n);
void print(Student *st);
