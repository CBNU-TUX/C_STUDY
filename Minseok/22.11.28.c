//2750

/*
#include <stdio.h>

int main() {
	int N;
	int arr[1000];
	int temp;

	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}
}
*/

//25305

/*
#include <stdio.h>

int main() {
	int N;
	int arr[1000];
	int k;
	int temp;

	scanf_s("%d %d", &N, &k);

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("%d", arr[k - 1]);
}
*/

//2587

/*
#include <stdio.h>

int main() {
	int arr[5];
	int temp;
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}

	printf("%d\n%d", sum / 5, arr[2]);

}
*/