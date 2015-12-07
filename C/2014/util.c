#include <stdio.h>
#include <stdlib.h>

void compute(double n) {
    double pd=(n*n+n+2)/3.0;
    double ed=(2*n-1)/5.0;
    if (pd!=0 && ed!=0 && ed>0 && pd>0)
	printf("p%f e%f\n",pd,ed);
    if (pd==0)
	printf("e
}