#include <stdio.h>
#include "sorting.h"

int intComparator(const int* x, const int* y){
	int a= int(int*)x;
	int b= int(int*)y;
	if(a < b) return -1;
	if(a > b) return 1;
	return 0;
}

int main(){
	int a[] = {1,6,7,2,3};
	insertionSort(a, 4 , sizeof(int), intComparator);
	for (int i = 0; i < 4; i++)
		printf("%d, ", a[i]);
	printf("\n");
}
