#include"Dog.h"

static void _Dog_speak() {
    printf("I 'm really a dog.\n");
}

Dog *newDog(char *name, int age, char *dog_str) {
    static struct DogVT dog_vt = {
        .copyOf = _DogObjectCopy,
        .speak = _Dog_speak
    };

    Dog *dog = malloc(sizeof(*dog));
    dog->vtp = &dog_vt;
    dog->dog_str = newString(dog_str);
    dog->name = newString(name);
    dog->age = age;
    return dog;
}

void testDog(Dog *dog) {
    printf("%s\n",dog->dog_str);
}
