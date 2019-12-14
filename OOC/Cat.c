#include"Cat.h"

static void _Cat_speak(){
	printf("I 'm a cat.\n");
}

static char *default_str = "miao miao";

Cat *new_cat(Animal *animal, char *cat_str){
	static VT cat_vt = { .speak = _Cat_speak };
	static VT *cat_vtp = &cat_vt;
	Cat *c = malloc(sizeof(Cat));
	c->animal = animal ? *animal : *new_animal(NULL, NULL);
	c->animal.vtp = cat_vtp;
	c->cat_str = cat_str? cat_str : default_str;
	return c;
}

void I_am_a_cat(Cat *cat){
	printf("%s\n", cat->cat_str);
}
