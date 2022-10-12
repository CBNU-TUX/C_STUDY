#include <stdio.h>

int main() {

	int hour;
	int min;
	int time;

	scanf("%d %d\n%d", &hour, &min, &time);

	hour = hour + time / 60;

	min = min + (time % 60);

	if (min >= 60) {
		hour++;
		min = min % 60;
	}

	if (hour >= 24) {
		hour = hour % 24;
	}

	printf("%d %d", hour, min);
}