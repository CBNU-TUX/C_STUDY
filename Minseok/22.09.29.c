/*
백준 3003
#include <stdio.h>
int main() {
	int king, queen, luke, vishop, knight, pon;
	scanf("%d %d %d %d %d %d", &king, &queen, &luke, &vishop, &knight, &pon);
	printf("%d %d %d %d %d %d", 1 - king, 1 - queen, 2 - luke, 2 - vishop, 2 - knight, 8 - pon);
	return 0;
}*/

/*
백준 10952
#include <stdio.h>
int main() {
	int getNum1;
	int getNum2;
	while (1) {
		scanf("%d %d", &getNum1, &getNum2);
		if (getNum1 == 0 && getNum2 == 0) {
			break;
		}
		printf("%d\n", getNum1 + getNum2);
	}
	return 0;
}
*/

/*
백준 10818
#include <stdio.h>
int main() {
	int num = 0;
	int max;
	int min;
	scanf("%d", &num);
	int a[num];
	
	for (int i = 0; i < num; i++) {
		scanf("%d", &a[i]);
	}
	max = a[0];
	min = a[0];
	for (int i = 1; i < num; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	for (int i = 1; i < num; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	printf("%d %d", min, max);

}*/