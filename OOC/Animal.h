#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include<stdio.h>
#include<stdlib.h>

typedef struct{
	void (*speak)();
}VT;

typedef struct{
	char *name;
	int age;
	VT *vtp;
}Animal;

static void speak(Animal *animal){
	(animal->vtp->speak)();
}

Animal *new_animal(char *name, int *age);

void print_basic_info(Animal *animal);

#endif
