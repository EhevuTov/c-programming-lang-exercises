#include <stdio.h>

int main(void) {
	int c, pc;
	pc = 1;
	while((c = getchar()) != EOF) {
		if(c != ' ') {
			if( pc == ' ') putchar(pc);
			putchar(c);
		}
		pc = c;
	}
	if (pc == ' ') putchar(pc);
	return 0;
}
