#include <stdio.h>


int main() {

	int a, b;
	int i = 0;
	int num1[3];
	int num2[3];

	int res1;
	int res2;

	scanf("%d %d", &a, &b);

	while (a != 0) {
		num1[i] = a % 10;
		a = a / 10;
		i++;
	}
	i = 0;

	while (b != 0) {
		num2[i] = b % 10;
		b = b / 10;
		i++;
	}

	res1 = num1[0] * 100 + num1[1] * 10 + num1[2];
	res2 = num2[0] * 100 + num2[1] * 10 + num2[2];

	if (res1 > res2) {
		printf("%d", res1);
	}
	else
		printf("%d", res2);
}