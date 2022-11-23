<<<<<<< HEAD
/*
#include <stdio.h>

int main() {
	int arr[20];
	int Ysum = 0, Msum = 0;
	int N;
	int sum = 0;

	scanf_s("%d", &N);

	int Yarr[20];
	int Marr[20];

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < N; i++) {
		Yarr[i] = (arr[i] / 30) + 1;
		Marr[i] = (arr[i] / 60) + 1;
	}

	for (int i = 0; i < N; i++) {
		Ysum += Yarr[i];
		Msum += Marr[i];
	}

	int Y = 10 * Ysum;
	int M = 15 * Msum;

	if (Y < M) {
		printf("Y %d", Y);
	}
	else if (Y > M) {
		printf("M %d", M);
	}
	else if (Y == M) {
		printf("Y M %d", Y);
	}
}
*/

/*
#include <stdio.h>

int main() {
	int N;
	double max;
	double result;
	double sum = 0;

	scanf_s("%d", &N);

	double arr[100];

	for (int i = 0; i < N; i++) {
		scanf_s("%lf", &arr[i]);
	}

	max = 0;

	for (int i = 0; i < N; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	for (int i = 0; i < N; i++) {
		arr[i] = arr[i] / max * 100;

	}

	for (int i = 0; i < N; i++) {
		sum += arr[i];
	}

	result = sum / N;

	printf("%lf", result);
}
*/

=======
/*
#include <stdio.h>

int main() {
	int arr[20];
	int Ysum = 0, Msum = 0;
	int N;
	int sum = 0;

	scanf_s("%d", &N);

	int Yarr[20];
	int Marr[20];

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < N; i++) {
		Yarr[i] = (arr[i] / 30) + 1;
		Marr[i] = (arr[i] / 60) + 1;
	}

	for (int i = 0; i < N; i++) {
		Ysum += Yarr[i];
		Msum += Marr[i];
	}

	int Y = 10 * Ysum;
	int M = 15 * Msum;

	if (Y < M) {
		printf("Y %d", Y);
	}
	else if (Y > M) {
		printf("M %d", M);
	}
	else if (Y == M) {
		printf("Y M %d", Y);
	}
}
*/

/*
#include <stdio.h>

int main() {
	int N;
	double max;
	double result;
	double sum = 0;

	scanf_s("%d", &N);

	double arr[100];

	for (int i = 0; i < N; i++) {
		scanf_s("%lf", &arr[i]);
	}

	max = 0;

	for (int i = 0; i < N; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	for (int i = 0; i < N; i++) {
		arr[i] = arr[i] / max * 100;

	}

	for (int i = 0; i < N; i++) {
		sum += arr[i];
	}

	result = sum / N;

	printf("%lf", result);
}
*/

>>>>>>> 210314d5853715b0316c9c863f9b9777774ed8cb
