#pragma once
#include "CreateFigure.h"
#include "S_Figure.h"

class CreateS : public CreateFigure
{
public:
	Figure* FactoryMethod()
	{
		return new S();
	}
};