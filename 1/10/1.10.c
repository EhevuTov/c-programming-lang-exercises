#include <stdio.h>

int main(void) {
	int c, sw;
	while((c = getchar()) != EOF) {
		sw = 0;
		if (c == '\t') { sw = 1; putchar('\\'); putchar('t');}
		if (c == '\b') { sw = 1; putchar('\\'); putchar('b');}
		if (c == '\\') { sw = 1; putchar('\\'); putchar('\\');}
		if(0 == sw) putchar(c);
	}
	return 0;
}
