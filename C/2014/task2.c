#include <stdio.h>
#include <stdlib.h>
void compute(double n);
int main(int argc, char * argv[]) {
    compute(atof(argv[1]));
    return 0;
}