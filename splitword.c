#include <stdio.h>

#define IN 1
#define OUT 0

main() {
	int c, state;

	state = OUT;
	c = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == ' ' || c == '\t') {
			if (state == IN) {
				putchar('\n');
			}
			state = OUT;
		} else {
			putchar(c);
			state = IN;
		}
	}
}
