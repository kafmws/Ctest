#include<stdio.h>
#include<stddef.h>

#define container_of(ptr, type, member) ({ \
     const __typeof__( ((type *)0)->member ) *__mptr = (ptr); \
     (type *)( (char *)__mptr - offsetof(type,member) );})

typedef struct{
		long a,b,c;
}longtype;

int main(){
	longtype long_arg = { .a = 0 , .b = 1 };
	long *bptr = &long_arg.b;
	longtype *ptr = ({(longtype *)((char *)bptr - offsetof(longtype,b));});
	ptr = container_of(bptr,longtype,b);
//	ptr = ({const __typeof__( ((longtype*)0)->b )*__mptr = (bptr);(longtype *)( (char *)__mptr - offsetof(longtype,b) );});
	printf("%p\n%p\n",&long_arg,ptr);
}
