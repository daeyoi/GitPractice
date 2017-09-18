#ifndef HELLO
#define HELLO

#include <stdio.h>

// src 문자열을 dest 문자열에 복사하는 함수.
char *myStrcpy(char *dest, const char *src);

// string 문자열의 길이를 반환하는 함수.
size_t myStrlen(const char *string);

// src 문자열을 dest문자열 뒤에 붙이는 함수.
char *myStrcat(char *dest, const char *src);

// string1과 string2를 비교하는 함수.
// 문자열이 같으면 0 반환
// string1문자열이 string2문자열보다 작다면 음수
// string1문자열이 string2문자열보다 크다면 양수
int myStrcmp(const char *string1, const char *string2);

#endif
