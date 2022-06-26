#include "Garbage.h"
#include <iostream>


Dustbin::Dustbin() : Garbage()
{

}

void Dustbin:: throwOutGarbage(Garbage inGarbage)
{
	houseWasteContent.push_back(inGarbage);	
}

void Dustbin::throwOutPaperGarbage(PaperGarbage inPaperGarbage, bool isSqueezed)
{
	if (isSqueezed = true)
	{
		paperContent.push_back(inPaperGarbage);
	}
}

void Dustbin::throwOutPlasticGarbage(PlasticGarbage inPlasticGarbage, bool isClean)
{
	if (isClean = true)
	{
		plasticContent.push_back(inPlasticGarbage);
	}
}


