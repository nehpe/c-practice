#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[]) {
	if (argv != 2) {
		printf("Usage: temperature_ctof 100");
		return -1;
	}

	int degrees_c = atoi(argc[1]);
	int degrees_f = (degrees_c * 1.8) + 32;
	printf("%dC is %dF\n", degrees_c, degrees_f);
	return 0;
}