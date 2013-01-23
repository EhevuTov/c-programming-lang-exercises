#include <stdio.h>

int main(void) {
	int c;
	while(((c = getchar()) != EOF) == 1) {
		putchar(c);
	}
	return 0;
}
