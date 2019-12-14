#include"Animal.h"

typedef struct{
	Animal animal;
	char *cat_str;
}Cat;

void I_am_a_cat(Cat *cat);

Cat *new_cat(Animal *animal, char *cat_str);
