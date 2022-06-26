#include "Garbage.h"
#include <iostream>

PaperGarbage::PaperGarbage()
{
	isSqueezed = false;
}

void PaperGarbage:: squeeze(bool isSqueezed)
{
	isSqueezed = true;
}