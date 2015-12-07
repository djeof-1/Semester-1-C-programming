#include <stdio.h>
int main() {
	int array[2][3]={{1,2,3},{4,5,6}};
	printf("%d ",array[0][5]);
	int *PI;
	PI=array;
	printf("%d ",*(PI));
}
