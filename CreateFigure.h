#pragma once
#include "Figure.h"

class CreateFigure abstract
{
public:
	virtual Figure* FactoryMethod() abstract;
};