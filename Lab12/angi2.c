#include<stdio.h>
#include<stdbool.h>
int compare_asc(int *num1, int *num2){
	if(*num1 >= *num2){
		return 1;
	}
	else {
		return 0;
	}

}
int compare_desc(int *num1, int *num2){
	if(*num1 <= *num2){
		return 1;
	}
	else {
		return 0;
	}

}
void sort_array(int *arr, int size, int(*compare)(const int *, const int *)){
	bool swapped;
	for(int i = 0 ; i < size ; i++){
		swapped = false;
		for(int j = 0 ; j < size; j++){
			if(compare(&arr[j],&arr[j+1])){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;

				swapped = true;
			}
		}

		if(!swapped){
			break;
		}
	}
}
void print_array(int * arr, int size){
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
	
	sort_array(arr,size,compare_asc);
	printf("Array sorted in ascending order: ");
	print_array(arr,size);
	
	sort_array(arr,size,compare_desc);
	printf("Array sorted in descending order: ");
	print_array(arr,size);
	
	return 0;
}
