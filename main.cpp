#include <iostream>
#include "Garbage.h"

int main()
{
	Garbage garbage1; 

	garbage1.setGarbageName("smieciowa");
	garbage1.getGarbageName(); 
	garbage1.setGarbageName("blabla");
	garbage1.getGarbageName();

	Dustbin dustbin;

	dustbin.throwOutGarbage(garbage1);
	
	

}
