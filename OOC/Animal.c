#include"Animal.h"

static void _AnimalSpeak() {
    printf("I don't know what to speak.\n");
}

Animal *newAnimal(char *name, int age) {
    static struct AnimalVT vt = {
        .copyOf = _AnimalObjectCopy,
        .speak = _AnimalSpeak,
    };

    Animal *p 		= malloc(sizeof(*p));
    p->name 		= newString(name);
    p->vtp 			= &vt;
    p->age 			= age;

    return p;
}

void print_basic_info(Animal *animal) {
    printf("name = %s, age = %d.\n", animal->name, animal->age);
}
