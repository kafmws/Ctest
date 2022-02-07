#ifndef _CAT_H_
#define _CAT_H_

#include"Animal.h"

#define MACRO_Cat_VF \
	MACRO_Animal_VF

#define MACRO_Cat_ATTRS \
	MACRO_Animal_ATTRS \
	char *	cat_str;

EXTENDS(Cat, Animal)

Cat *newCat(char* name, int age, char *cat_str);

void testCat(Cat *cat);

#endif
