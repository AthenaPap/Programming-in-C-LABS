#include <stdio.h>

void printbinary(unsigned int num) {

	int digits[32];
	int i;
	int num_of_digits = 0; 

	if (num == 0)           
		printf("0");

	while (num != 0) {
		digits[num_of_digits] = num % 2;
		num = num / 2;
		num_of_digits++;
	}

	for (i = num_of_digits - 1; i >= 0; i--) 
		printf("%d", digits[i]);
	printf("\n");
}

int main(void)
{
	unsigned int n;

	do
	{
		printf("Enter a number (502 stops the program): ");
		scanf("%d", &n);

		if(n == 502)
			break;

		printbinary(n);
	}
	while (1);

	return 0;
}