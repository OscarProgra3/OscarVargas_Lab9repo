#include "GodEaters.h"

GodEaters::GodEaters(string pnombre,int pcantvida, int plvlactual, int plvldefensa, GodArcs* pgodarc)
{
	nombre=pnombre;
	cantvida=pcantvida;
	lvlactual=plvlactual;
	lvldefensa=plvldefensa;
	godarc=pgodarc;
}

string GodEaters::getNombre()
{
	return nombre;
}
void GodEaters::setNombre(string tnombre)
{
	nombre=tnombre;
}

int GodEaters::getCantidadvida()
{
	return cantvida;
}
void GodEaters::setCantidadvidad(int tcantvida)
{
	cantvida=tcantvida;
}

int GodEaters::getLvlactual()
{
	return lvlactual;
}
void GodEaters::setLvlactual(int tlvlactual)
{
	lvlactual=tlvlactual;
}

int GodEaters::getLvldefensa()
{
	return lvldefensa;
}
void GodEaters::setLvldefensa(int tlvldefensa)
{
	lvldefensa=tlvldefensa;
}

GodArcs* GodEaters::getGodarcs()
{
	return godarc;
}
void GodEaters::setGodarcs(GodArcs* tgodarc)
{
	godarc=tgodarc;
}
