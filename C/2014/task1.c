#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int i=1;
    FILE *sfile;
    FILE *cfile;
    FILE *ofile;
    ofile=fopen("other.dat","w");
    sfile=fopen("sqroot.dat","w");
    cfile=fopen("croot.dat","w");
    int j=1;
    int flag=0;
    while (i<argc) {
	while (j<atoi(argv[i])/2) {
	    if (j*j == atoi(argv[i])) {
		flag=1;
		fprintf(sfile,"%s ",argv[i]);
		break;
	    }
	    if (j*j*j == atoi(argv[i])) {
		flag=1;
		fprintf(cfile,"%s ",argv[i]);
		break;
	    }
	    j++;
	}
	if (flag!=1)
	    fprintf(ofile,"%s ",argv[i]);
	flag=0;
	i++;
	j=1;
    }
    fclose(ofile);
    fclose(sfile);
    fclose(cfile);
    return 0;
}
	