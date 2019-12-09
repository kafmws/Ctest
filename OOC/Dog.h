#include"Animal.h"

static char *dog_str = "wang wang";

typedef struct{
	Animal animal;
	char *dog;
}Dog;

Dog *new_dog(Animal *animal);

void I_am_a_dog(Dog *dog);
