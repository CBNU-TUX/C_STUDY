#include <stdio.h>

int main()
{
	int i, j, n, num, c;

	scanf("%d", &n);

	for (i = 0, c = 0; i < n; i++)
	{
		scanf(" %d", &num);

		for (j = 2; j < num; j++)
		{
			if (num % j == 0)
				break;
		}
		if (j == num)
			c += 1;
	}

	printf("%d\n", c);

}