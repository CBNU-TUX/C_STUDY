<<<<<<< HEAD
#include <stdio.h>

int main() {

	int a;

	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
=======
#include <stdio.h>

int main() {

	int a;

	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < i+1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
>>>>>>> a1ce78351ea348a1dcbd85a3183737217cc51b15
