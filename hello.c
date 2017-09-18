#include "hello.h"
#include <stdlib.h>
char* myStrcat(char *dest, const char *src);

int main() {
    char *c=(char*)malloc(50);
    char *m=(char*)malloc(50);

    printf("hello world\n");
}

char *myStrcpy(char *dest, const char *src) {
    return NULL;
}

size_t myStrlen(const char *string) {
    return 0;
}

char *myStrcat(char *dest, const char *src) {
    char *re=dest;
    while(*dest!='\0')
      {
        dest++;
      }
      while(*src!='\0')
      {
        *dest++ = *src++;
      }
      *dest='\0';

      return re;
}

int myStrcmp(const char *string1, const char *string2) {
    return 0;
}
