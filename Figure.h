#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

enum byte_ { RED = 4, GREEN = 2, BLUE = 1, BLACK = 0, WHITE = 15 };

class COLOUR
{
public:
	static void SetColor(int text, int background)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)((background << 4) | text));
	} 
};

class Figure abstract
{
protected:
	std::string name;
	std::vector<std::vector<int>> figure = { {0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0} };
	byte_ colour;
public:
	virtual void show() 
	{
		std::cout << name << "\n\n";
		COLOUR::SetColor(colour, BLACK);
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
				if (figure[i][j])
					std::cout << "*";
				else
					std::cout << " ";
			std::cout << "\n";
		}
		COLOUR::SetColor(WHITE, BLACK);
	};
};