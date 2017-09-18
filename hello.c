#include "hello.h"

int main() {
    printf("hello world\n");

    if (myStrcmp("b", "a") == 0) {
        printf("%c compare %c = %s\n", 'b', 'a', "equal");
    } else {
        printf("%c compare %c = %s\n", 'b', 'a', "difference");
    }

    if (myStrcmp("a", "a") == 0) {
        printf("%c compare %c = %s\n", 'a', 'a', "equal");
    } else {
        printf("%c compare %c = %s\n", 'a', 'a', "difference");
    }
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
    for (int i = 0; ; i++) {
        if (string1[i] != string2[i]) {
            return string1[i] < string2[i] ? -1 : 1;
        }

        if (string1[i] == '\0') {
            return 0;
        }
    }
}
