//2738

/*
#include <stdio.h>

int main() {
	int n1, n2;
	int matrix1[100][100];
	int matrix2[100][100];
	int sum[100][100];

	scanf_s("%d %d", &n1, &n2);

	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			scanf_s("%d", &matrix1[i][j]);
		}
	}

	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			scanf_s("%d", &matrix2[i][j]);
		}
	}

	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			sum[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}

	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
}
*/

//2566

/*
#include <stdio.h>

int main() {
	int matrix[9][9];
	int maximum = 0;
	int m, n;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf_s("%d", &matrix[i][j]);
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (maximum <= matrix[i][j]) {
				maximum = matrix[i][j];
				m = i + 1;
				n = j + 1;
			}
		}
	}

	printf("%d\n", maximum);
	printf("%d %d", m, n);
}
*/

//2563

/*
#include <stdio.h>

int main() {
	int area[100][100] = {0};
	int n;
	int x, y;
	int count = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d %d", &x, &y);

		for (int a = x - 1; a < 10 + (x - 1); a++) {
			for (int b = y - 1; b < 10 + (y - 1); b++) {
				area[a][b] = 1;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (area[i][j] == 1)
				count++;
		}
	}

	printf("%d", count);
}
*/