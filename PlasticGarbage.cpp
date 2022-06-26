#include "Garbage.h"
#include <iostream>

PlasticGarbage::PlasticGarbage()
{
	isClean = false; 
}

void PlasticGarbage:: clean(bool isClean)
{
	isClean = true;
}