#include <stdio.h>
#include "publicAPI.h"


int main(int argc, char *argv[]) {
	for (int i = 1; i<argc; i++) {
		longestPath(argv[i]);
	}

	return (0);
}