#include <stdio.h>
#include <string.h>

int main() {
	char a[10];
	char temp;

	scanf("%s", a);

	for (int i = 0; i < strlen(a) - 1; i++) {
		for (int j = 0; j < strlen(a); j++) {
			if (a[j] < a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	printf("%s", a);

}