#include <stdio.h>

int main() {
	int c, cl;
	int nl[15];     // 0 -> 1  13 -> 14 14 ->15
	c = cl = 0;
	for (int i = 0; i < 15; i++) {
		nl[i] = 0;
	}
	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == '\t' || c == ' ') {
			if (cl >= 15) {
				++nl[15 - 1];
				cl = 0;
			} else {
			    ++nl[cl - 1]
			}
		}
	}
}
