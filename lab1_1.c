#include <stdio.h>

int main(void) {
	int numberOfAbscences;
	float A = 0.0, PR1, PR2, BE, TE, GR;

	printf("Please insert the number of absences: ");
	scanf("%d", &numberOfAbscences);

	printf("Please insert the grade of first test: ");
	scanf("%f", &PR1);

	printf("Please insert the grade of second test: ");
	scanf("%f", &PR2);

	printf("Please insert the grade of final test: ");
	scanf("%f", &TE);

	if (numberOfAbscences == 0)
		A = 10.0;
	else if (numberOfAbscences == 1)
		A = 5.0;

	BE = A*0.2 + PR1*0.4 + PR2*0.4;

	if (BE < 4.5) {
		printf("Apotyxia sta ergastiria!\n");
		return 1;
	}
	
	if (TE < 4.5) {
		printf("Failed in final exam!\n");
		return 1;
	}

	GR = BE*0.5 + TE*0.5;

	printf("Success in the examination of Programming in C with grade  %.2f\n", GR);

	return 0;
}