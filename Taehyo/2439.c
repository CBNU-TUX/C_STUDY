#include <stdio.h>


int swap(int a[], int b[]) {

	int k = 2;
	for (int i = 0; i < 3; i++) {

		b[k] = a[i];
	}

}
int main() {

	int num1[3];
	int num2[3];

	int cn1[3];
	int cn2[3];

	scanf_s("%d %d", num1, num2);

	swap(num1, cn1);
	swap(num2, cn2);
	
	if (cn1 > cn2) {
		printf("%d", cn1);
	}
	else
		printf("%d", cn2);
	
}