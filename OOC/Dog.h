#include"Animal.h"

typedef struct{
	Animal animal;
	char *dog_str;
}Dog;

Dog *new_dog(Animal *animal, char *dog_str);

void I_am_a_dog(Dog *dog);
