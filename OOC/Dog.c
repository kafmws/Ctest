#include"Dog.h"

static void _Dog_speak(){
	printf("I 'm really a dog.\n");
}

Dog *new_dog(Animal *animal){
	static VT dog_vt = { .speak = _Dog_speak };
	static VT *dog_vtp = &dog_vt;
	Dog *dog = malloc(sizeof(Dog));
	dog->animal = animal ? *animal : *new_animal(NULL, NULL);
	dog->animal.vtp = dog_vtp;
	dog->dog = dog_str;
	return dog;
}

void I_am_a_dog(Dog *dog){
	printf("%s\n",dog->dog);
}
