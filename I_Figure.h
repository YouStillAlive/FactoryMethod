#pragma once
#include "Figure.h"

class I : public Figure
{
public:
	I()
	{
		name = "I Figure - ";
		figure =
		{
		{0,1,0,0},
		{0,1,0,0},
		{0,1,0,0},
		{0,1,0,0}
		};
		colour = BLUE;
	}
};