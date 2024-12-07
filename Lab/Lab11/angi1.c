#include "sort.h"

/*student.txt файл дахь өгөгдлийг ашиглан дүнгээр нь хөөсөн, сонгон, 
оруулан эрэмбэлэх аргаар буурахаар эрэмбэлнэ.  
Үр дүнг файлд бичиж хадгална. 6 оноо */
int main(){
    FILE *fptr = NULL;
    fptr = fopen("students.txt", "r");
    if(!fptr){
        printf("input file error!\n");
        exit(-1);
    }
    int n;
    fscanf(fptr, "%d", &n);

    Student *arr = (Student *)malloc(n*sizeof(Student));
    for(int i = 0; i < n ; i++){
        fscanf(fptr, "%s%d%f", arr[i].name, &arr[i].age, &arr[i].gpa);
    }
    fclose(fptr);
    //bubble(arr, n);
    //selection(arr, n);
    insertion(arr, n);
    for(int i = 0 ; i < n ; i++){
        printf("%s %d %3.1f\n", arr[i].name, arr[i].age, arr[i].gpa);
    }
    fptr = fopen("result.txt", "w");
    if(!fptr){
        printf("input file error!\n");
        exit(-1);
    }
    for(int i = 0 ; i < n ; i++){
        fprintf(fptr, "%s\t%d\t%f\n", arr[i].name, arr[i].age, arr[i].gpa);
    }
    fclose(fptr);
    free(arr);
    return 0;
}