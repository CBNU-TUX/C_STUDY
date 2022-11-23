#include <stdio.h>

int main()
{
	int i;

	scanf("%d", &i);

	for (int k = 2; k <= i; k++)
	{
		if (i % k == 0)
		{
			printf("%d\n", k);
			i = i / k;
			k = 1;
		}
	}
}