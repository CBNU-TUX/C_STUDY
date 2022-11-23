#include <stdio.h>

int main() {

	int num[9];
	int max = 0;
	int whe;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &num[i]);

		if (max < num[i]) {
			max = num[i];
			whe = i;
		}
	}
	printf("%d\n%d", max, whe + 1);

}