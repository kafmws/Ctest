#include"Cat.h"

static void _Cat_speak() {
    printf("I 'm a cat.\n");
}

Cat *newCat(char* name, int age, char *cat_str) {
    static struct CatVT cat_vt = {
        .copyOf = _CatObjectCopy,
        .speak = _Cat_speak
    };

    Cat *cat = malloc(sizeof(*cat));
    cat->vtp = &cat_vt;
    cat->cat_str = newString(cat_str);
    cat->name = newString(name);
    cat->age = age;
    return cat;
}

void testCat(Cat *cat) {
    printf("%s\n", cat->cat_str);
}
