#include"Dog.h"

static void _Dog_speak(){
	printf("I 'm really a dog.\n");
}

static char *default_str = "wang wang";

Dog *new_dog(Animal *animal, char *dog_str){
	static VT dog_vt = { .speak = _Dog_speak };
	static VT *dog_vtp = &dog_vt;
	Dog *dog = malloc(sizeof(Dog));
	dog->animal = animal ? *animal : *new_animal(NULL, NULL);
	dog->animal.vtp = dog_vtp;
	dog->dog_str = dog_str;
	return dog;
}

void I_am_a_dog(Dog *dog){
	printf("%s\n",dog->dog_str);
}
