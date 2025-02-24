#include <stdio.h>
#include <stdlib.h>
struct Student {
        char name[30];
        int age;
        float gpa;
};
typedef struct Student Student;

int sortGPA(Student a[], int n);

int main()
{
        Student a[200];
        FILE *fin = NULL;
        fin = fopen("students.txt", "r");
        if (!fin) {
                printf("input file error!\n");
                exit(-1);
        }
        int i, n;
       fscanf(fin, "%d", &n);

        for (i = 0; i < n; i++) {
                fscanf(fin, "%s%d%f", a[i].name, &a[i].age, &a[i].gpa);
        }
        fclose(fin);

        sortGPA(a, n);

        for (i = 0; i < n; i++)
                printf("%3.1f\t%d\t%s\n", a[i].gpa, a[i].age, a[i].name);

        //        sortGPA(a, n) хийсэн үр дүнг файлд бичиж хадгалах,Тэгэхдээ дүнг нь эхний багананд хадгалах



        return 0;
}
int sortGPA(Student a[], int n){
         // оюутан а хүснэгт дэхь өгөглүүдийг дүнгээр нь эрэмбэлэх үйлдлийг хийнэ.

}
