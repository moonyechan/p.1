#include <stdio.h> 
int main(void)
{ 
	int i, j;
	for (i = 2; i <= 100; i++)
	{
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
			printf("%d ", i);
	}
	printf(" \n ");
	return 0;
}

