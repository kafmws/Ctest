#include"Animal.h"
#include"Cat.h"
#include"Dog.h"

int main(){
	int age = 3;
	Animal *animal = new_animal("Animal", &age);
	Cat *cat = new_cat(NULL);
	Dog *dog = new_dog(&(Animal){"dog", 5});
	I_am_a_cat(cat);
	I_am_a_dog(dog);
	speak(animal);
	speak(cat);
	speak(dog);
	print_basic_info(animal);
	print_basic_info(cat);
	print_basic_info(dog);
	getchar();
	getchar();
	return 0;
}
