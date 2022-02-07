#include<stdio.h>

int main(){
	
	int a = 0;
	printf("%d\n", (sizeof((a++)+(++a)+a++),a));
	
	void *p = NULL;//just a address variable, without type
	printf("size of int * = %d\n", sizeof *(int *)p);
	printf("size of void * = %d\n", sizeof *p);
	
	return 0;
} 
