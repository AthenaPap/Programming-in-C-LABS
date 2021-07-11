#include <stdio.h>
#include <stdlib.h>    


int **pascal(int n);  


int main(int argc, char *argv[])
{
	int n, i, j;
	int **p;

	if (argc < 2)
		return 1;
	n = atoi(argv[1]);
	if (n < 1)
		return 1;

	p = pascal(n);
	if (p == NULL)
		return 1;


	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%2d  ", p[i][j]);
		printf("\n");
	}

	for (i = 0; i < n; i++)
		free(p[i]);        
	free(p);            

	return 0;
}


int **pascal(int n)
{
	int i, j;
	int **array;

	if (n < 1) return (NULL); 

	array = (int **) malloc(n * sizeof(int *));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{

		array[i] = (int *) malloc((i+1) * sizeof(int));
		if (array[i] == NULL)
		{

			for (j = 0; j < i; j++)
				free(array[j]);    
			free(array);         
			return (NULL);
		}


		array[i][0] = 1;
		for (j = 1; j < i; j++)
			array[i][j] = array[i-1][j-1] + array[i-1][j];
		array[i][i] = 1;
	}

	return (array);
}
