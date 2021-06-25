#include <stdio.h>
#define N 10

int *search(int array[], int size, int num); 

int main(void) {
    
	int A[N] = {0, 4, 8, 2, -2, 100, 45, -12, 45, 31};
	int *result;

	result = search(A, N, 100);
	
	if(result != NULL) {
		printf("Number=%d, position(0-%d)=%ld\n", *result, N-1, result-A);
	}
	else {
		printf("Number not found!\n");
	}
	return 0;
}


int *search(int array[], int size, int num) {
 
    int i;

	for(i=0; i<size; i++){
		if(array[i] == num){
			return &(array[i]); 
		}
	}
	return NULL;
}
