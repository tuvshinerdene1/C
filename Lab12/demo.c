#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#include<string.h>

// usuhuur erembeleh haritsuulah function 
int compare_asc(const void *a, const void *b){
    int num1 = *((int *)a);
    int num2 = *((int *)b);
    return num1 - num2; 
char compare_usuh(const void *a, const void *b){
    int num1 = *((int *)a);
    int num2 = *((int *)b);
    return num1 - num2; 
}
double haritsuul_asc(const void *a, const void *b){
    int num1 = *((int *)a);
    int num2 = *((int *)b);
    return num1 - num2; 
}
}
// buurahaar erembeleh haritsuulah function 
int compare_desc(const void *a, const void *b){
    int num1 = *((int *)a);
    int num2 = *((int *)b);
    return num2 - num1; 
}
//haritsuulah function ni zaagchaar ugugdsun erembeleh function
void sort_array(int *arr, int size, int (*compare)(const void *a, const void *b)) {
    qsort(arr, size, sizeof(int), compare);
}
//elementuudiig hevleh
void print_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
int arr[] = {5, 2, 7, 1, 9, 3};
int size = sizeof(arr) / sizeof(arr[0]);
printf("Original array: "); 
print_array(arr, size);

// usuhuur erembelj hevlej haruulah
sort_array(arr, size, compare_asc); 
printf("Array sorted in ascending order: "); 
print_array(arr, size);
//buurahaar erembelj hevlej haruulah
sort_array(arr, size, compare_desc); 
printf("Array sorted in descending order: "); 
print_array(arr, size);
return 0;
}