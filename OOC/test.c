#include"Animal.h"
#include"Cat.h"
#include"Dog.h"

int main(){
	int age = 3;
	Animal *animal = newAnimal("Animal", age);
	Cat *cat = newCat("cat", 2, "miao");
	Dog *dog = newDog("dog", age, "wang");
	testCat(cat);
	testDog(dog);
	speak(animal);
	speak((Animal *)cat);
	speak((Animal *)dog);
	print_basic_info(animal);
	print_basic_info((Animal *)cat);
	print_basic_info((Animal *)dog);
	return 0;
}
