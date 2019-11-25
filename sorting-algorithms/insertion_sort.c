#include <stdio.h>

int insertionSort(int a[], int size);

int insertionSort(int a[], int size){
    int i, j, key;
    for(i=1; i<=size-1; i++){
        key = a[i];
        j = i-1;
        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;
    }
    printf("\n Sorted Array:");
    for(i=0; i<= size-1; i++){
        printf("\t%d", a[i]);
    }
}

int main()
{
    int a[] = {4, 2, 3, 1, 5};
    int size = sizeof(a)/sizeof(a[0]);
    insertionSort(a, size);
    return 0;
}

