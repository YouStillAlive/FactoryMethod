#include "CreateFigure.h"
#include "CreateI.h"
#include "CreateJ.h"
#include "CreateL.h"
#include "CreateS.h"
#include "CreateT.h"
#include "CreateZ.h"

int main()
{
	COLOUR::SetColor(WHITE, BLACK);
	CreateFigure *F1 = new CreateI();
	F1->FactoryMethod()->show();
	delete F1;
	F1 = new CreateJ();
	F1->FactoryMethod()->show();
	delete F1;
	F1 = new CreateL();
	F1->FactoryMethod()->show();
	delete F1;
	F1 = new CreateS();
	F1->FactoryMethod()->show();
	delete F1;
	F1 = new CreateT();
	F1->FactoryMethod()->show();
	delete F1;
	F1->FactoryMethod()->show();
	F1 = new CreateZ();
	delete F1;
	return 0;
}