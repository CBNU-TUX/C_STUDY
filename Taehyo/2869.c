#include <stdio.h>

int main() {

	int A;
	int B;
	int V;

	int hei;
	int date = 1;

	scanf("%d %d %d", &A, &B, &V);

	V = V - A;
	hei = A - B;

	if (V <= 0) {
		printf("%d", date);
	}
	else {
		if (V % hei == 0) {
			date = V / hei + date;
			printf("%d", date);
		}
		else {
			date = V / hei + date + 1;
			printf("%d", date);
		}
	}

}