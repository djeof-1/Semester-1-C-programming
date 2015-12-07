#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int process(int,int,float (*fptr)(float,float));


float add(float n1, float n2) {
	return n1+n2;
}
float subtract(float n1, float n2) {
	return n1-n2;
}
float multiply(float n1, float n2) {
	return n1*n2;
}
float division(float n1, float n2) {
	return n1/n2;
}

int main(int argc, char *argv[]) {
	int i=1;
	float num1;
	float num2;
	float res=0.0;
	num1 = atof(argv[i]);
	while (i<argc-1) {
        if (i+2 >= argc)
            break;
		float (*fptr)(float,float);
		num2 = atof(argv[i+2]);
		if (!strcmp(argv[i+1],"+")) {
			fptr = &add;
			//res = fptr(num1,num2);
		}

		else if (!strcmp(argv[i+1],"-")) {
			fptr = &subtract;
			//res = (*fptr)(num1,num2);
		}
		else if (!strcmp(argv[i+1], "*")) {
			fptr = &multiply;
			//res = (*fptr)(num1,num2);
		}
		else if (!strcmp(argv[i+1],"/")) {
			fptr = &division;
			//res = (*fptr)(num1,num2);
		}
		i+=2;
		num1 = process(num1,num2,fptr);
	}
    printf("%g\n",num1);
	return 0;
}
