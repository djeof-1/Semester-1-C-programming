#include <stdio.h>
#include <stdlib.h>

int arecur(int *array, int count, int res) {
	if (count == 0)
		return res;
	else {
		if (array[count] > res) {
			res = array[count];
		}
		return arecur(&array[0],count-1,res);
	}
}
int main(int argc, char *argv[]) {
	int *array;
	array = (int *)malloc(sizeof(int) * argc);
	int i=0;
	for (i=0;i<argc-1;i++) {
		array[i] = atoi(argv[i+1]);
	}
	int array2[5] = {5,6,1,7,1};
	printf("%d\n\n",arecur(array,argc-2,0));
	return 0;
}	
