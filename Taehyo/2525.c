#include <stdio.h>

struct stack {
	
	int top;
	int arr[top];

};

void chogiwha(int *top){
	
	struct stack s;
	s->top = -1;
}

void ipryuk(int k){

	if (s.top >= k) {
		return;
	}

	scanf("%d", s.top);

	for (int i = 0; i < s.top; i++) {
		scanf("%d", &s.arr[i]);
	}
	

}

int main() {

	int k;
	int top;

	chogiwha(top);

	struct stack *s;

	s->top = &top;

	scanf("%d", &k);

	ipryuk(k);

	for (int i = s->top - 1; i >= 0; i--) {
		printf("%d ", s->top);
	}
}