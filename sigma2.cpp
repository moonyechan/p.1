#include <stdio.h>

int main(void)
  {
	int x = 0;

	for (int i = 10; i <= 30; i++) 
	{
		for (int j = 0; j <= 5; j++)
		{

			x += i + j;

		}

	}

	printf("%d", x);

	return 0;

}

