#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	FILE *in = fopen(argv[1],"r");
	int res=0;
	char temp[50]="";
	int i=0;
	int count=1;
	int count2=1;
	char temp2[50]="";
	char resstr[50]="";
	while (!feof(in)) {
		fscanf(in,"%s",temp);
		while (!feof(in)) {
			fscanf(in,"%s",temp2);
			if (!strcmp(temp,temp2)) 
				count++;
		}
		if (count > res) {
			res = count;
			strcpy(resstr,temp);
		}
		rewind(in);
		while (i<count2) { 
			fscanf(in,"%s",temp);
			i++;
		}
		count = 1;
		count2++;
		i=0;
	}
	printf("%s\n",resstr);
	return 0;
}

