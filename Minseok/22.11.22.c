//10817

/*
#include <stdio.h>

int main() {
	int arr[3];
	int temp;

	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf("%d", arr[1]);
}
*/

//9610

/*
#include <stdio.h>

int main() {
	int n;
	int x[1000] = { 0 };
	int y[1000] = { 0 };
	int q1 = 0, q2 = 0, q3 = 0, q4 = 0, axis = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d %d", &x[i], &y[i]);
	}

	for (int i = 0; i < n; i++) {
		if (x[i] == 0 || y[i] == 0) {
			axis++; continue;
		}
		if (x[i] > 0) {
			if (y[i] > 0) {
				q1++;
			}
			else if (y[i] < 0) {
				q4++;
			}
			continue;
		}
		if (x[i] < 0) {
			if (y[i] > 0) {
				q2++;
			}
			else if (y[i] < 0) {
				q3++;
			}
			continue;
		}
	}
	printf("Q1: %d\n", q1);
	printf("Q2: %d\n", q2);
	printf("Q3: %d\n", q3);
	printf("Q4: %d\n", q4);
	printf("AXIS: %d\n", axis);
}
*/

//11654

/*
#include <stdio.h>

int main() {
	char c;
	scanf_s("%c", &c);
	printf("%d", c);
}
*/

//11720

/*
#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	char arr[n];
	scanf_s("%s", arr);

	int sum = 0;
	for (int i = 0; i < strlen(arr); i++) {
		int num = arr[i] - '0';
		sum += num;
	}
	printf("%d", sum);
}
*/

//2908

/*
#include <stdio.h>

int main() {
	char arr1[3] = { 0 };
	char arr2[3] = { 0 };
	int temp;

	scanf_s("%s %s", arr1, arr2);

	temp = arr1[0];
	arr1[0] = arr1[2];
	arr1[2] = temp;

	temp = arr2[0];
	arr2[0] = arr2[2];
	arr2[2] = temp;

	int num1 = (arr1[0] - '0') * 100 + (arr1[1] - '0') * 10 + (arr1[2] - '0');
	int num2 = (arr2[0] - '0') * 100 + (arr2[1] - '0') * 10 + (arr2[2] - '0');

	if (num1 > num2) {
		printf("%d", num1);
	}
	else
		printf("%d", num2);
}
*/

