#include <iostream>
#include "AnimalsInZoo.h"
#include "Animal.h"

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Red Panda", 1825);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();
   animal3.display();

   AnimalsInZoo zoo1;
   zoo1.display();

   AnimalsInZoo zoo2(animal2);
   zoo2.display();

   delete animal1;
}
