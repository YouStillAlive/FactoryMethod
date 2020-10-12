#pragma once
#include "Figure.h"

class L : public Figure
{
public:
	L()
	{
		name = "L Figure - ";
		figure =
		{
		{0,1,1,1},
		{0,1,0,0},
		{0,0,0,0},
		{0,0,0,0}
		};
		colour = RED;
	}
};