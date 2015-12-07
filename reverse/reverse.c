#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
        char token[100]="",token2[100]="";
        int counter=0;
        FILE *in;
        in=fopen(argv[1],"r");
        while (counter!=8) {
            counter++;
            if (counter==8)
                fscanf(in,"%s",token);
            else
                fscanf(in,"%s\n",token);
        }
        int i=0;
        int *sampleRates;
        sampleRates=malloc(sizeof(int)*2);
    
        while (!feof(in)) {
            fscanf(in,"%s\n",token);
            sampleRates[i]=atoi(token);
            i++;
        }
        int res=i;
        rewind(in);
        i=0;
        while (i<8) {
            if (i==0 || i==7) {
                fscanf(in,"%s",token);
                i++;
                printf("%s\n",token);
            }
            
            else {
                fscanf(in,"%s %s",token,token2);
                printf("%s %s\n",token,token2);
                i+=2;

            }
        }
        res-=1;
        while (res>=0) {
            printf("%d\n",sampleRates[res]);
            res--;
        }
        return 0;
}
