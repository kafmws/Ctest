#include"Animal.h" 

static char *cat_str = "miao miao";

typedef struct{
	Animal animal;
	char *cat;
}Cat;

void I_am_a_cat(Cat *cat);

Cat *new_cat(Animal *animal);
