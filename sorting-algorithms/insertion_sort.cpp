#include <iostream>
using namespace std; 

#define size 6

void swap(int &a, int &b){
	a = a + b;
	b = a - b; 
	a = a - b;
}
int main(){
// using for loop - 
	int a[size];
	// input an array - 
	cout << "Enter elements in array: ";
	for(size_t i=0; i<size; i++) cin >> a[i];

	for(int j=1; j<size; j++){
		int key = a[j];
		for(int i=j; i>=0; i--){
			if(a[i] > key){
				swap(a[i], a[i+1]);
			}
		}
	}
	cout << "sorted array:\n"; 
	for(int i=0; i<size; i++){
		cout << a[i] << " ";
	}
	cout << endl;

// using while loop - 
	int array[size];
	// input an array - 
	cout << "Enter elements in array: ";
	for(size_t i=0; i<size; i++) cin >> array[i];
	
	for(int i=1; i<size; i++){
		int pivot = array[i];
		int j = i-1;
		while(j>=0 && array[j]>pivot){
			array[j+1] = array[j];
			j--;
		}
		array[j+1] = pivot;
	}
	cout << "sorted array:\n"; 
	for(int i=0; i<size; i++){
		cout << array[i] << " ";
	}
	cout << endl;
	
	return 0;
}
