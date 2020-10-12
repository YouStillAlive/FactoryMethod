#pragma once
#include "Figure.h"

class Z : public Figure
{
public:
	Z()
	{
		name = "Z Figure - ";
		figure =
		{
		{0,0,0,0},
		{0,0,0,0},
		{1,1,0,0},
		{0,1,1,0}
		};
		colour = BLUE;
	}
};