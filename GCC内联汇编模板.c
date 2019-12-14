#include<stdio.h> 

int main(){
	void *a = 0;
	char *ap = (char *)&a;
	int res;
	__asm__(
		"movl $0x11111111,%%eax\n\t"
		"movl $0x11111234,%%ebx\n\t"
		"movl %%eax,%1\n\t"
		"movl %%ebx,%2\n\t"
		: "=c"(res)
		: "o"(*ap), "o"(*(char *)(ap+4))
//		: "o"(a), "o"(*((char *)&a+4))
		: "%eax", "%ebx"
	);
	printf("%p", a);
	printf("\n%p", res);
	return 0;
}
