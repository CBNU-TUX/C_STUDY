#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp = NULL;
	char arr[100] = {0};
	char num[100] = {0};
	int count=0;

	fp = fopen("number.txt", "r");

	fscanf(fp, "%s", arr);

	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == ',') {
			continue;
		}

		num[count++] = arr[i];
	}

	int temp;

	for (int i = 0; i < strlen(num); i++) {
		for (int j = 0; j < strlen(num) - 1; j++) {
			if (num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	printf("%s", num);

}