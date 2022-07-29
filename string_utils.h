#ifndef _STRING_UTILS_H
#define _STRING_UTILS_H

/**
 * Removes the leading whitespaces from str without allocating a new string,
 * i.e. it simply returns str shifted n bytes, where n is the number of whitespaces found
 *
 * It is asumed str to be null-terminated. If you're not sure about that, you'd better use trimnleft
 */
char* trim_left(char* str);

char* trimnleft(char* str, int len);

/**
 * Removes the trailing whitespaces from str without allocating a new string.
 * It will place a null-character ('\0') where the first trailing whitespace is found
 *
 * It is asumed str to be null-terminated. If you're not sure about that, you'd better use trimnright
 */
char* trim_right(char* str);
char* trimnright(char* str, int len);

/**
 * Simply calls trim_left and trim_right
 */
char* trim(char* str);

#endif
