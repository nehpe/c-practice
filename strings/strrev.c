#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void die(const char *message) 
{
	printf("%s\n", message);
	exit(1);
}

int main(int argv, char *argc[]) 
{
	if (argv != 2) {
		die("USAGE: strrev <string_to_reverse>");
	}

	int length = strlen(argc[1]);
	int i = 0;
	for(i = 0; i < length; i++) {
		printf("%c", argc[1][length-i-1]);
	}
	printf("\n");

	return 0;
}
