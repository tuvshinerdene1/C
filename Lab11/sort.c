#include "sort.h"
void swap(Student *a, Student *b);
void bubble(Student a[], int size){
    int i ,j;
    bool swapped;
    for(int i = 0; i < size-1; i++){
        swapped = false;
        for(int j = 0; j < size - i - 1; j++){
            if(a[j].gpa<a[j+1].gpa){
                swap(&a[j], &a[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}
void selection(Student a[], int size){
    for(int i = 0; i < size -1 ;i++){
        int max_idx = i;
        for(int j = i + 1; j < size; j++){
            if(a[j].gpa > a[max_idx].gpa){
                max_idx = j;
            }
        }
        swap(&a[i], &a[max_idx]);
    }
}
void insertion(Student a[], int size){
    for(int i = 1; i < size ; i++){
        Student key = a[i];
        int j = i - 1;
        while(j>=0 && a[j].gpa < key.gpa){
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;
    } 
}
void swap(Student* a, Student* b){
    Student temp = * a;
    *a = *b;
    *b = temp;
}
void count_sort(int a[], int size){
    int max = a[0];
    int result[size];
    for(int i = 1; i < size; i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    int* countArray = (int*)calloc(max+1, sizeof(int));
    for(int i = 0 ; i < size; i++){
        countArray[a[i]]++;
    }
    for(int i = 1; i < max+1; i++){
        countArray[i] = countArray[i-1] + countArray[i];
    }
    for(int i = size -1 ; i >= 0 ; i--){
        result[countArray[a[i]]-1] = a[i];
        countArray[a[i]] -=1;
    }
    for(int i = 0 ; i < size; i++){
        a[i] = result[i];
    }
    free(countArray);
    
}