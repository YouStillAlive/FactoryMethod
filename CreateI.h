#pragma once
#include "I_Figure.h"
#include "CreateFigure.h"

class CreateI : public CreateFigure
{
public:
	Figure* FactoryMethod() override
	{
		return new I();
	}
};