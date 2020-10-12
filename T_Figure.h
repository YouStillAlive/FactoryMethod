#pragma once
#include "Figure.h"

class T : public Figure
{
public:
	T()
	{
		name = "T Figure - ";
		figure =
		{
		{0,0,0,0},
		{0,0,0,0},
		{0,1,0,0},
		{1,1,1,0}
		};
		colour = RED;
	}
};