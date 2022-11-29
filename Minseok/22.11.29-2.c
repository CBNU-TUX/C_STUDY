//1152

/*
#include <stdio.h>
#define SIZE 1000000

int main() {
	char arr[SIZE];
	int count = 1;

	gets(arr);

	if (strlen(arr) == 0) {
		printf("0");
		return 0;
	}

	if (strlen(arr) == 1) {
		if (arr[0] == ' ') {
			printf("0");
			return 0;
		}
	}

	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == ' ') {
			if (i == 0) {
				continue;
			}
			if (i == strlen(arr) - 1) {
				continue;
			}
			count++;
		}
	}

	printf("%d", count);
}
*/

//10872

/*
#include <stdio.h>

int factorial(int n);

int main() {
	int n;
	int ans;

	scanf_s("%d", &n);

	ans = factorial(n);

	printf("%d", ans);
}

int factorial(int n) {
	if (n == 1 || n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}
*/

//25304

/*
#include <stdio.h>

int main() {
	int sum;

	scanf_s("%d", &sum);

	int n;

	scanf_s("%d", &n);

	int sum2 = 0;
	int m, h;

	for (int i = 0; i < n; i++) {
		scanf_s("%d %d", &m, &h);
		sum2 += (m * h);
	}

	if (sum == sum2) {
		printf("Yes");
	}
	else
		printf("No");
}
*/
