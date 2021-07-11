#include <stdio.h>
#include <string.h>
#include <ctype.h>

void charstats(char *string);

int stats[26];  


int main()
{
	char input[100];
	int  i;

	printf("Please enter a sentence; to terminate enter ###\n");
	do
	{ 
		fgets(input, 100, stdin);
		if (strncmp(input, "###", 3) != 0)
			charstats(input);
	} while (strncmp(input, "###", 3) != 0);

	for (i = 0; i < 26; i++)
		printf("Lertter %c appeared %2d times\n", 'a'+i, stats[i]);

	return 0;
}


void charstats(char *string)
{
	int n;

	while (*string != '\0')
	{
		if (isalpha(*string))
		{
			n = tolower(*string) - 'a';
			stats[n]++;
		}
		string++;
	}
}