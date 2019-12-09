#include"Cat.h"

static void _Cat_speak(){
	printf("I 'm a cat.\n");
}

Cat *new_cat(Animal *animal){
	static VT cat_vt = { .speak = _Cat_speak };
	static VT *cat_vtp = &cat_vt;
	Cat *cat = malloc(sizeof(Cat));
	cat->animal = animal ? *animal : *new_animal(NULL, NULL);
	cat->animal.vtp = cat_vtp;
	cat->cat = cat_str;
	return cat;
}

void I_am_a_cat(Cat *cat){
	printf("%s\n", cat->cat);
}
