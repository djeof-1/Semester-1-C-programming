#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
    FILE *items;
    FILE *wish;
    double cost=0.0;
    
    items=fopen(argv[1],"r");
    wish=fopen(argv[2],"r");
    char token[100]="";
    char tok[100]="";
    char ntoken[100]="";
    char ntok[100]="";
    while (!feof(items)) {
	fscanf(items,"%s %s\n",token,tok);
	while (!feof(items)) {
	    fscanf(wish,"%s %s\n",ntoken,ntok);
	    if (!strcmp(token,ntoken)) {
		cost+=(atof(ntok)*atof(tok));
		break;
	    }
	}
	rewind(wish);
    }
    printf("%f \n",cost);
    fclose(items);
    fclose(wish);
    return 0;
}