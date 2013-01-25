#include <stdio.h>

int main(void) {
	int c,blanks,tabs,nl;
	blanks = tabs = nl = 0;
	while((c = getchar()) != EOF) {
		if(c == ' ')  ++blanks;
		if(c == '\t') ++tabs;
		if(c == '\n') ++nl;
	}
		printf("blanks:\t\t%d\n", blanks);
		printf("tabs:\t\t%d\n", tabs);
		printf("newline:\t%d\n",nl);
	return 0;
}
