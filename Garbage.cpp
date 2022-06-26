#include "Garbage.h"
#include <iostream>
//definicje, jak cos ma dzialac

Garbage::Garbage() { //konstruktor
	name = "jakisSmiec";
}

void Garbage::getGarbageName() { //getter
	std::cout << name << std::endl;
}

void Garbage::setGarbageName(std::string garbageName) { //setter
	name = garbageName;
}

