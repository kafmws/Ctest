#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include "stdooc.h"

#define MACRO_Animal_VF \
	void (*speak)();

// MACRO_Object_ATTRS is omittable
#define MACRO_Animal_ATTRS \
	int   	age;\
	char *	name;

OOC(Animal)

// virtual method
static void speak(Animal *animal){
	(animal->vtp->speak)();
}

// construction method
Animal *newAnimal(char *name, int age);

// not a virtual method, can not override
void print_basic_info(Animal *animal);


#endif
