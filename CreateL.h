#pragma once
#include "L_Figure.h"
#include "CreateFigure.h"

class CreateL : public CreateFigure
{
public :
	Figure * FactoryMethod() override
	{
		return new L();
	}
};