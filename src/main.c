#include <stdio.h>
#include "publicAPI.h"


//TODO Main.py needs revision to supply only the files like main below:
int main(int argc, char *argv[]) {
	for (int i = 1; i<argc; i++) {
		longestPath(argv[i]);
	}

	return (0);
}