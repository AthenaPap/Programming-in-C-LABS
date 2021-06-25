#include <stdio.h>

#define N 100  


void mergearrays(int *A, int size_a, int *B, int size_b, int *C);
int  readarray(int *arr);


int main(void) {
	int i, size_a, size_b;
	int A[N], B[N], C[2*N];   

	size_a = readarray(A);       
	size_b = readarray(B);

	mergearrays(A, size_a, B, size_b, C);

	for (i = 0; i < size_a+size_b; i++)
		printf("%d ", C[i]);
	printf("\n");

	return 0;
}


void mergearrays(int *A, int size_a, int *B, int size_b, int *C)
{
	int i, j;


	for (i = j = 0; i < size_a && j < size_b; C++){
		if (*A < *B){
			*C = *A;    
			A++;          
			i++;
		}
		else {
			*C = *B;    
			B++;
			j++;
		}
	}


	if (i < size_a){
		for ( /* empty */; i < size_a; i++)
			*(C++) = *(A++);     
	}

	if (j < size_b){
		for ( ; j < size_b; j++)
			*(C++) = *(B++);
	}
}


int readarray(int *arr)
{
	int i, num;
	do {
		printf("Enter number of elements of the array (at most %d): ", N);
		scanf("%d", &num);
	}
	while (num > N);

	printf("Give the %d elements (sorted): ", num);
	
	for (i = 0; i < num; i++)
		scanf("%d", &arr[i]);

	return num;
}
