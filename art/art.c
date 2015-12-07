#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]) {
	FILE *in;
	in=fopen(argv[1], "r");
	int rows, cols;
	fscanf(in, "%d %d",&rows, &cols);
	int i=0,j=0;
	char sym;
	char **array;
	array = (char **) malloc (sizeof(char *) * rows);
	for (i=0; i<rows; i++) {
		array[i] = (char *) malloc (sizeof(char) * cols);
	}
	while (!feof(in)) {
		fscanf(in, "%d %d %c", &i, &j, &sym);
		array[i][j] = sym;
		if (sym == '@')
			array[i][j] = ' ';
	}	
	for (i=0; i< rows; i++ ) {
		for (j=0; j<cols; j++ ) {
			printf("%c ",array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
