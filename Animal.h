#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
	public: 
		Animal(std::string speciesName, unsigned int discoveryYear);
		Animal();
		void display() const;
	
	private: 
		std::string species = "";
		unsigned int year_discovered = 0;
};
		
#endif
