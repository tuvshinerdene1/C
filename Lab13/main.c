#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "student.h"

int comp_by_gpa(const void *a, const void *b) {
    float diff = ((Student *)a)->gpa - ((Student *)b)->gpa;
    if (diff > 0) return 1;
    if (diff < 0) return -1;
    return 0;
}

int comp_by_age(const void *a, const void *b) {
    int diff = ((Student *)a)->age - ((Student *)b)->age;
    if (diff > 0) return 1;
    if (diff < 0) return -1;
    return 0;
}

int comp_by_name(const void *a, const void *b) {
    return strcmp(((Student *)a)->fname, ((Student *)b)->fname);
}

int main() {
    int n, cmd, i;
    Student a[200];
    FILE *fin = fopen("students.txt", "r");
    if (!fin) {
        printf("input file error!\n");
        exit(-1);
    }
    fscanf(fin, "%d", &n);
    for (i = 0; i < n; i++) {
        fscanf(fin, "%s%d%f", a[i].fname, &a[i].age, &a[i].gpa);
    }
    fclose(fin);

    print_students(a, n);

    char name[20];
    int age;
    float gpa;

    while (1) {
        printf("1: Nereer xaix, 2: Age-aar xaix, 3: GPA-aar xaix, 4: GPA erembelex, 5: Age-aar erembelex, 6: Nereer erembelex, 7: Xevlex, 8: Garax\n");
        scanf("%d", &cmd);
        if (cmd == 1) {
            printf("Xaix ner: ");
            scanf("%s", name);
            Student key;
            strcpy(key.fname, name);
            qsort(a, n, sizeof(Student), comp_by_name);
            Student *item = (Student *)bsearch(&key, a, n, sizeof(Student), comp_by_name);
            if (item != NULL) {
                printf("Found: %s, Age: %d, GPA: %.2f\n", item->fname, item->age, item->gpa);
                int position = item - a;
                for(int i = position-1; i >=0; i--){
                    if(strcmp(a[i].fname, name) ==0){
                        printf("Found: %s, Age: %d, GPA: %.2f\n", a[i].fname, a[i].age, a[i].gpa);
                    }
                }
                for(int i = position+1 ; i < n ;i++){
                    if(strcmp(a[i].fname, name) ==0){
                        printf("Found: %s, Age: %d, GPA: %.2f\n", a[i].fname, a[i].age, a[i].gpa);
                    }
                }
            } else {
                printf("not found\n");
            }
        } else if (cmd == 2) {
            printf("Xaix age: ");
            scanf("%d", &age);
            Student key;
            key.age = age;
            qsort(a, n, sizeof(Student), comp_by_age);
            Student *item = (Student *)bsearch(&key, a, n, sizeof(Student), comp_by_age);
            if (item != NULL) {
                printf("Found: %s, Age: %d, GPA: %.2f\n", item->fname, item->age, item->gpa);
                int position = item - a;
                for(int i = position - 1; i >= 0 ;i--){
                    if(a[i].age == age){
                        printf("Found: %s, Age: %d, GPA: %.2f\n", a[i].fname, a[i].age, a[i].gpa);
                    }
                    else{
                        break;
                    }
                }
                for(int i = position+1 ; i < n ;i++){
                    if(a[i].age == age){
                        printf("Found: %s, Age: %d, GPA: %.2f\n", a[i].fname, a[i].age, a[i].gpa);
                    }
                    else{
                        break;
                    }
                }
            } else {
                printf("not found\n");
            }
        } else if (cmd == 3) {
            printf("Xaix GPA: ");
            scanf("%f", &gpa);
            Student key;
            key.gpa = gpa;
            qsort(a, n, sizeof(Student), comp_by_gpa);
            Student *item = (Student *)bsearch(&key, a, n, sizeof(Student), comp_by_gpa);
            if (item != NULL) {
                printf("Found: %s, Age: %d, GPA: %.2f\n", item->fname, item->age, item->gpa);
                int position = item - a;
                for(int i = position-1; i>=0;i--){
                    if(a[i].gpa == gpa){
                        printf("Found: %s, Age: %d, GPA: %.2f\n", a[i].fname, a[i].age, a[i].gpa);
                    }
                    else{
                        break;
                    }
                }
                for(int i = position+1 ; i < n ;i++){
                    if(a[i].gpa == gpa){
                        printf("Found: %s, Age: %d, GPA: %.2f\n", a[i].fname, a[i].age, a[i].gpa);
                    }
                    else{
                        break;
                    }
                }
            } else {
                printf("not found\n");
            }
        } else if (cmd == 4) {
            qsort(a, n, sizeof(Student), comp_by_gpa);
            print_students(a, n);
        } else if (cmd == 5) {
            qsort(a, n, sizeof(Student), comp_by_age);
            print_students(a, n);
        } else if (cmd == 6) {
            qsort(a, n, sizeof(Student), comp_by_name);
            print_students(a, n);
        } else if (cmd == 7) {
            print_students(a, n);
        } else {
            break;
        }
    }
    return 0;
}
