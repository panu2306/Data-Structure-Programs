// Input array requires to be sorted to perform binarySearch.
// This Program Is Using Recursion Method:
#include<stdio.h>

int binarySearch(int a[], int start, int end, int searchElement);

int binarySearch(int a[], int start, int end, int searchElement){
	int mid = (start + end)/2;
	int flag = 0;
	if(end >= start){
		if(a[mid] == searchElement){
			flag = 1;
		}
		else if(a[mid] < searchElement){
			return binarySearch(a, mid+1, end, searchElement);
		}
		else{
			return binarySearch(a, start, mid-1, searchElement);
		}
	}
	return flag;
}

void main(){
	int a[] = {1, 2, 3, 4, 5};
	int start =0;
	int end = sizeof(a)/sizeof(a[0]);
	int searchElement = 3;
	int result = binarySearch(a, start, end, searchElement);
	(result == 0) ? printf("Element Is Not Present In An Array") : printf("Element Is Present In An Array");
}
