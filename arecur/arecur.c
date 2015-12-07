#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc/malloc.h>
int * getNumbers() {
	int *array=malloc(sizeof(int)*2);
	printf("Give me an integer: ");
	scanf("%d",&array[0]);
	printf("Another: ");
	scanf("%d",&array[1]);
	printf("Another: ");
	scanf("%d",&array[2]);
	printf("Another: ");
	scanf("%d",&array[3]);
	printf("Another: ");
	scanf("%d",&array[4]);
	return array;
}

int sum(int *ptr, int size) {
	if (size==1)
		return *(ptr);
	else {
		return *(ptr) + sum(ptr+1,size-1);
	}	
}

double mean(int *ptr, int size) {
	return sum(ptr,size)/size*1.0;
}

int head(int *array) {
    return array[0];
}

int *tail(int *ptr) {
	return (ptr+1);
}

int countEvens(int *c,int size) {
        if (size==0) {
            return 0;
        }
        else if (head(c)%2==0) {
            return 1 + countEvens(tail(c),size-1);
        }
        else
            return countEvens(tail(c),size-1);
}
int main() {
    int *myArrayptr;
    myArrayptr=getNumbers();
    printf("%d\n",head(myArrayptr));
    printf("%p\n",tail(myArrayptr));
    printf("%d\n",countEvens(myArrayptr,5));
    printf("%d\n",sum(myArrayptr,5));
    printf("%f\n",mean(myArrayptr,5));
	return 0;
}
