//2675

/*
#include <stdio.h>

int main() {
	int n;
	int r;
	char arr[20];

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d %s", &r, arr);

		for (int j = 0; j < strlen(arr); j++) {
			for (int k = 0; k < r; k++) {
				printf("%c", arr[j]);
			}
		}
		printf("\n");
	}
}
*/

//10807

/*
#include <stdio.h>

int main() {
	int n;
	int arr[100];
	int v;
	int count = 0;

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	scanf_s("%d", &v);

	for (int i = 0; i < n; i++) {
		if (arr[i] == v)
			count++;
	}

	printf("%d", count);
}
*/

//10871

/*
#include <stdio.h>

int main() {
	int n, x;
	int arr[10000];

	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] < x)
			printf("%d ", arr[i]);
	}
}
*/