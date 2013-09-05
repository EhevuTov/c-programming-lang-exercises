#include <stdio.h>

int f2c(int f) {
	return 5 * (f-32) /9;
};
int c2f(int c) {
	return (c+32) * 9 /5;
};

int main (void) {
	int f, c;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	f = c = lower;
	printf("Fahrenheit->Celsius\n");
	while (f <= upper) {
		printf("%d\t%d\n",f,f2c(f));
		f+=step;
	}
	printf("Celsius->Fahrenheit\n");
	while (c <= upper) {
		printf("%d\t%d\n",c,c2f(c));
		c+=step;
	}
}
