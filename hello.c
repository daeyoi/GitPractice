#include "hello.h"

int main() {
	printf("hello world\n");
}

char *myStrcpy(char *dest, const char *src) {
	
	int i = 0;
	while(1){

		if(src[i]!=NULL){
			dest[i]=src[i];
			i++;
		}else{
			break;
		}

	}
	return NULL;
}

size_t myStrlen(const char *string) {
	return 0;
}

char *myStrcat(char *dest, const char *src) {
	return NULL;
}

int myStrcmp(const char *string1, const char *string2) {
	return 0;
}
