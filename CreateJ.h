#pragma once
#include "CreateFigure.h"
#include "J_Figure.h"

class CreateJ : public CreateFigure
{
public:
	Figure* FactoryMethod() override
	{
		return new J();
	}
};