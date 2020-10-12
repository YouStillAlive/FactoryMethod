#pragma once
#include "CreateFigure.h"
#include "T_Figure.h"

class CreateT : public CreateFigure
{
public:
	Figure* FactoryMethod() override
	{
		return new T();
	}
};