#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void print(int **arrayptr,int rows, int columns) {
	
}

int main(int argc, char *argv[]) {
	int i,j;
	float **array;
	int rows = atoi(argv[1]);
	int columns = atoi(argv[2]);
	
	array = (float **) malloc(sizeof(float*) * rows);
	for (i=0;i<rows;i++) {
		array[i] = (float *) malloc(sizeof(float) * columns);
	} 
	
	for (i=0;i<rows;i++) {
		for (j=0;j<columns;j++) {
			array[i][j] = atof(argv[j+2]);
		}
	}
	print(array,rows,columns);
}	
