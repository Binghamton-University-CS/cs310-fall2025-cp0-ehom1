#include "AnimalsInZoo.h"
#include <iostream>

AnimalsInZoo::AnimalsInZoo() {
	numAnimals = 0;
	animal = Animal();
}

AnimalsInZoo::AnimalsInZoo(const Animal& a) {
	numAnimals = 1;
	animal = a;
}

void AnimalsInZoo::display() const {
	std::cout << "Number of animals: " << numAnimals << std::endl;
	if (numAnimals == 1) {
		animal.display();
	}
}
