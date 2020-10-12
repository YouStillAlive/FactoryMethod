#pragma once
#include "Figure.h"

class J : public Figure
{
public:
	J()
	{
		name = "J Figure - ";
		figure =
		{
		{0,1,0,0},
		{0,1,1,1},
		{0,0,0,0},
		{0,0,0,0}
		};
		colour = BLUE;
	}
};