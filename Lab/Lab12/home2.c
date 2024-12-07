/*Ангид өгөгдсөн хоёрдугаар дасгалын эрэмбэлэх функцийг int, char, double төрлийн өгөгд-
лийг эрэмбэлэх боломжтой болгон авч буй өгөгдлийн төрлүүдийг void болгон өөрчлөнө.
Тухайн өгөгдлийн төрлийн харьцуулах функцийг мөн хэрэгжүүлнэ.
ы */
#include<stdio.h>
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
	if(*(int*)num1 >= *(int*)num2){
		return 0;
	}
	else {
		return 1;
	}
}
int char_compare_desc(void *num1, void *num2){
	if(*(int*)num1 >= *(int*)num2){
		return 1;
	}
	else {
		return 0;
	}
}


void sort_array(void *arr, int size, void(*compare)(const void *, const void *)){
	bool swapped;
	int i;
	for(i = 0; i < size - 1; i ++){
		swapped = false;
		int j;
		for( j = 0 ; j < size - i - 1; j++){
			if(compare(arr[j], arr[j+1])){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				
				swapped = true;
			}
		}
		if(swapped == false){
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
int main(){
	
	int arr[] = {5,2,7,1,9,3};
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("original array: ");
	print_array(arr, size);
	
	sort_array(arr,size,int_compare_asc);
	printf("Array sorted in ascending order: ");
	print_array(arr,size);
	
	sort_array(arr,size,int_compare_desc);
	printf("Array sorted in descending order: ");
	print_array(arr,size);
	
	return 0;
}
