#include "string_utils.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
	char data[6][2][50]  = { // input, expected output
		{"    hello    ", "hello"},
		{"hello      ", "hello"},
		{"    hello", "hello"},
		{"hello", "hello"},
		{"        ", ""},
		{"", ""}
	};
	int n_test_cases = 6;

	char* actual;
	for (int i = 0; i < n_test_cases; ++i)
		if (strcmp((actual = trim(data[i][0])), data[i][1]) != 0) {
			printf("Fail! Expected: \"%s\". Actual: \"%s\"\n", data[i][1], actual);
			return 1;
		} else {
			printf("trimmed string: \"%s\"\t\t(OK)\n", actual);
		}

	printf("All tests passed! :)\n");
	return 0;
}
