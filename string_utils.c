#include <string.h>
#include <ctype.h>

char* trimnleft(char* str, int len) {
	// i = # of leading whitespaces
	int i = 0;
	for (; i < len && isspace(str[i]); ++i);
	
	return str + i;
}

char* trim_left(char* str) {
	return trimnleft(str, strlen(str));
}

char* trimnright(char* str, int len) {
	// i = index of the last no-whitespace character in str
	// i + 1 = whitespace or null (\0)
	int i = len - 1;
	for (; i >= 0 && isspace(str[i]); --i);

	str[i + 1] = '\0';
	return str;
}
char* trim_right(char* str) {
	return trimnright(str, strlen(str));
}

char* trim(char* str) {
	return trim_left(trim_right(str));
}
