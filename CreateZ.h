#pragma once
#include "Z_Figure.h"
#include "CreateFigure.h"

class CreateZ : public CreateFigure
{
public:
	Figure* FactoryMethod() override
	{
		return new Z();
	}
};