//x64 VC/gcc environment implement va_args
#include<stdio.h>
#include<stdarg.h>
#include<stddef.h>

typedef struct{
		long a,b,c;
}longtype;

void var_args_func(const char * fmt, ...){
    
    uintptr_t ap = ((char*)&fmt) + sizeof(uintptr_t);
    
    va_list list;
    va_start(list, fmt);
    
    if (list == ap) { printf("equal\n"); }
    printf("list = %p\n  ap = %p\n", list, ap);
    
    printf("%d\n", va_arg(list, int));
    printf("%d\n", va_arg(list, int));
    printf("%s\n", va_arg(list, char *));
    longtype t;
	t = va_arg(list, longtype);
    printf("%ld %ld\n", t.a, t.b);

    va_end(list);//list = NULL

    printf("%d\n", *(int*)ap);

    ap += sizeof(uintptr_t);
    printf("%d\n", *(int*)ap);

    ap += sizeof(uintptr_t);
    printf("%s\n", *((char**)ap));
}

int main(){
	for(int i = 1;i<=8;i++)if(i&(i-1)!=0)printf("%d ",i);
	longtype long_arg = { 0 ,1 };
	var_args_func("%d %d %s\n", 0, 1, "hello world", long_arg);
}
