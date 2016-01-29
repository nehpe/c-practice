#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[]) {
	if (argv != 2) {
		printf("Usage: temperature_ftoc 68");
		return -1;
	}

	int degrees_f = atoi(argc[1]);
	int degrees_c = (degrees_f - 32) / 1.8;
	printf("%dF is %dC\n", degrees_f, degrees_c);
	return 0;
}