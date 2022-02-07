#ifndef _DOG_H_
#define _DOG_H_

#include"Animal.h"

#define MACRO_Dog_VF \
		MACRO_Animal_VF

#define MACRO_Dog_ATTRS \
		MACRO_Animal_ATTRS\
		char *dog_str;

EXTENDS(Dog, Animal)

Dog *newDog(char* name, int age, char *dog_str);

void testDog(Dog *dog);

#endif
