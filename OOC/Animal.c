#include"Animal.h"

void _Animal_speak(){
	printf("I don't know what to speak.\n");
}

Animal *new_animal(char *name, int *age){
	static VT vt = { .speak = _Animal_speak };
	static VT *vtp = &vt;
	Animal *animal = (Animal *)malloc(sizeof(Animal));
	animal->vtp = vtp;
	animal->name = name? name : NULL;
	animal->age = age ? *age : 0;
	return animal;
}

void print_basic_info(Animal *animal){
	printf("name = %s, age = %d.\n", animal->name, animal->age);
}
