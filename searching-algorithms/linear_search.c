#include<stdio.h>

int linearSearch(int a[], int searchElement, int arraySize);

int linearSearch(int a[], int searchElement, int arraySize){
	int i, flag = 0;
	for(i=0; i<= arraySize-1; i++){
		if(searchElement == a[i]){
			flag = 1;
		}
	}
	if(flag == 1){
		return 1;
	}
	else{
		return -1;
	}
}
void main(){
	int a[] = {3, 5, 1, 4, 2};
	int arraySize = sizeof(a)/sizeof(a[0]);
	int searchElement = 1; 
	int result = linearSearch(a, searchElement, arraySize);
	(result == 1) ? printf("Element is present in the array"): printf("Element is not present in the array"); 
}
