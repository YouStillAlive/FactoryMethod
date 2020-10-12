#pragma once
#include "Figure.h"

class S : public Figure
{
public :
	S()
	{
		name = "S Figure - ";
		figure =
		{
		{0,0,0,0},
		{0,0,0,0},
		{0,1,1,0},
		{1,1,0,0}
		};
		colour = GREEN;
	}
};