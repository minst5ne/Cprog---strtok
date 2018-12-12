#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *_strtok(char *str, char *del) {
	char *tok = NULL;
	int i,j,n=0;
	int len = 0;
	int len2 = 0;

	len = strlen(str);
	len2 = strlen(del);

	if(str != NULL) {
		tok = str;
	} else str = tok;

	while(tok != NULL) {
		for(i=0; i<len; i++) {
			for(j=0; j<len2; j++) {
				if (str[i] == del[j]) {
					str[i] = '\0';
				}
			}
		}
		break;
	}
		
	return str;
}


int main() {

	char test[100] = "Basic System Programming";
	char *result = NULL;

	printf("%s\n",test);

    result = _strtok(test,"ca");
	printf("\n%s\n",result);

	/*while (result != NULL) {
		printf("%s\n", result);
		result = _strtok(NULL,"s");
	}*/

	return 0;
}
