#include <stdio.h>

int main(void)
{
	char chr, lower_case;
	int i, pos, given_letters = 0, given_digits = 0;
	int nums[30];

	do
	{
		printf("Please insert a character ");
		scanf(" %c", &chr);

	
		if (chr >= 'A' && chr <= 'Z'){
			lower_case = (chr - 'A') + 'a';
			printf("The lower case latter of  '%c' is '%c'\n", chr, lower_case);
		} else if (chr >= 'a' && chr <= 'z'){
			pos = (chr - 'a') + 1;
			printf("Letter '%c' is at the position %d of english alphabet\n", chr, pos);
		} else if (chr >= '0' && chr <= '9'){
			nums[given_digs++] = chr - '0';
		} else {
			printf("You have entered the character '%c'\n", chr);
		}

		given_letters++;

	}
	while (chr != '$' && given_letters < 30);

	printf("Numbers: ");
	for(i=0; i<given_digits; i++)
		printf("%d ", nums[i]);
	printf("\n");

	return 0;
}
