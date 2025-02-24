/*Ангид өгөгдсөн хоёрдугаар дасгалын эрэмбэлэх функцийг int, char, double төрлийн өгөгд-
лийг эрэмбэлэх боломжтой болгон авч буй өгөгдлийн төрлүүдийг void болгон өөрчлөнө.
Тухайн өгөгдлийн төрлийн харьцуулах функцийг мөн хэрэгжүүлнэ.
ы */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int int_compare_asc(void *num1, void *num2){
	if(*(int*)num1 >= *(int*)num2){
		return 1;
	}
	else {
		return 0;
	}
}
int int_compare_desc(void *num1, void *num2){
	if(*(int*)num1 >= *(int*)num2){
		return 0;
	}
	else {
		return 1;
	}
}
int double_compare_asc(void *num1, void *num2){
    if(*(double*)num1 >= *(double*)num2){
		return 1;
	}
	else {
		return 0;
	}
}
int double_compare_desc(void *num1, void *num2){
	if(*(double*)num1 >= *(double*)num2){
		return 0;
	}
	else {
		return 1;
	}
}
int char_compare_asc(void *num1, void *num2){
	if(*(char*)num1 >= *(char*)num2){
		return 0;
	}
	else {
		return 1;
	}
}
int char_compare_desc(void *num1, void *num2){
	if(*(char*)num1 >= *(char*)num2){
		return 1;
	}
	else {
		return 0;
	}
}


void sort_array(void *arr, int size,int elem_size, int(*compare)(const void *, const void *)){

	bool swapped;
    for (int i = 0; i < size - 1; i++) {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            void *a = (char *)arr + j * elem_size;
            void *b = (char *)arr + (j + 1) * elem_size;
            if (compare(a, b) > 0) {
                char temp[elem_size];
                memcpy(temp, a, elem_size);
                memcpy(a, b, elem_size);
                memcpy(b, temp, elem_size);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void int_print_array(int * arr, int size){
	int i;
	for(i = 0 ; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void double_print_array(double * arr, int size){
	for(int i = 0 ; i < size; i++){
		printf("%.1f ", arr[i]);
	}
	printf("\n");
}
void char_print_array(char * arr,int size){
	for(int i = 0 ; i < size; i++){
		printf("%c ", arr[i]);
	}
	printf("\n");
}
int main(){
	
	int Intarr[] = {1,2,7,3,12,9,3};
	int size = sizeof(Intarr) / sizeof(Intarr[0]);
	printf("original array: ");
	int_print_array(Intarr, size);
	
	sort_array(Intarr,size,sizeof(int),int_compare_asc);
	printf("Array sorted in ascending order: ");
	int_print_array(Intarr,size);
	
	sort_array(Intarr,size,sizeof(int),int_compare_desc);
	printf("Array sorted in descending order: ");
	int_print_array(Intarr,size);
	
	double Doublearr[] = {1.2,2.5,7.2,3.12,12.001,9.1,3.4};
	size = sizeof(Doublearr) / sizeof(double);
	printf("original array: ");
	double_print_array(Doublearr, size);
	
	sort_array(Doublearr,size,sizeof(double),double_compare_asc);
	printf("Array sorted in ascending order: ");
	double_print_array(Doublearr,size);
	
	sort_array(Doublearr,size,sizeof(double),double_compare_desc);
	printf("Array sorted in descending order: ");
	double_print_array(Doublearr,size);


	char Chararr[] = {'a','b','a', 'd', 'e', 'z', 'a', 'b' };
	size = sizeof(Chararr) / sizeof(char);
	printf("original array: ");
	char_print_array(Chararr, size);
	
	sort_array(Chararr,size,sizeof(char),char_compare_asc);
	printf("Array sorted in ascending order: ");
	char_print_array(Chararr,size);
	
	sort_array(Chararr,size,sizeof(char),char_compare_desc);
	printf("Array sorted in descending order: ");
	char_print_array(Chararr,size);

	return 0;
}
