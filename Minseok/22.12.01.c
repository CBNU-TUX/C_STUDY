//4344

/*
#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		int s;
		double sum = 0;
		double count = 0;
		double arr[1000];
		scanf_s("%d", &s);

		for (int j = 0; j < s; j++) {
			scanf_s("%lf", &arr[j]);
			sum += arr[j];
		}

		for (int j = 0; j < s; j++) {
			if (arr[j] > sum / s) {
				count++;
			}
		}

		printf("%.3f%%\n", 100 * count / s);
	}
}
*/

//15596

/*
long long sum(int* a, int n) {
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		ans += a[i];
	}
	return ans;
}
*/

//1789

/*
#include <stdio.h>

int main() {
	double n;
	double sum = 0;
	double count = 0;
	scanf_s("%lf", &n);

	while (1) {
		count++;
		sum += count;
		if (sum > n) {
			printf("%.0f", count - 1);
			return 0;
		}
	}
}
*/