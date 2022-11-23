//5597

/*
#include <stdio.h>

int main() {
	int arr[28];
	int count;
	for (int i = 0; i < 28; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int i = 1; i <= 30; i++) {

		count = 0;
		for (int j = 0; j < 28; j++) {
			if (i == arr[j]) {
				count = 1;
			}
		}
		if (count == 0) {
			printf("%d\n", i);
		}
	
	}
}
*/

/*
#include <stdio.h>

int main() {
	int n;
	int arr[101];
	int count1 = 0;
	int count2 = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] == 1) {
			count1++;
		}
		else
			count2++;
	}

	if (count1 > count2) {
		printf("Junhee is cute!");
	}
	else
		printf("Junhee is not cute!");
}
*/

//2440

/*
#include <stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = n-i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
 }
 */

//2441

/*
#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = n - i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
}
*/

//2442

/*
#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = n - i - 1; j > 0; j--) {
			printf(" ");
		}

		for (int j = 0; j < 2*i+1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
*/

//2443

/*
#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j<i ; j++) {
			printf(" ");
		}

		for (int j = 2*n - 2*i -1; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
}
*/

//2444

/*
#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = n - i - 1; j > 0; j--) {
			printf(" ");
		}

		for (int j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}

		for (int j = 2 * n - 2 * i - 1; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}

}*/


