#include <stdio.h>

void mainMenu();
void escapeSequences() {
	printf("\n***********************ESCAPE SEQUENCES********************\n");
	printf("______________________________________________________________\n\n");
	printf(" \\t -> Horizontal Tab\n");
	printf(" \\n -> New Line\n");
	printf(" \\' -> Single Quote\n");
	printf(" \\\" -> Double Quote\n");
	printf(" \\x43 -> ASCII Hex\n");
	printf(" \\ -> Backslash\n");
	printf(" \\o -> Null");

	mainMenu();
}