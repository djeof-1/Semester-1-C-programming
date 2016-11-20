#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char tempstr[argc-1][50];
	char temp[50]="";
	int i=0;
	while (i<argc-1) {
		strcpy(tempstr[i],argv[i+1]);
		i++;
	}
	i=0;
	int j=1;
	while (i<argc-1) {
		j = i+1;
		while (j < argc-1) {
			if (strlen(tempstr[j]) < strlen(tempstr[i])) {
				strcpy(temp, tempstr[i]);
				strcpy(tempstr[i], tempstr[j]);
				strcpy(tempstr[j], temp);
			}
			j++;
		}
		i++;
	}
	i=0;
	while (i<argc-1) {
		printf("%s ",tempstr[i]);
		i++;
	}
	return 0;
}
