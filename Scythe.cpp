#include "Scythe.h"


Scythe::Scythe(int plvlatack, string pkindelement, int plvlslash, int plongcuttingpower) : GodArcs( plvlatack, pkindelement)
{
	lvlslash=plvlslash;
	longcuttingpower=plongcuttingpower;
}

int Scythe::getLvlslash()
{
	return lvlslash;
}
void Scythe::setLvlslash(int tlvlslash)
{
	lvlslash=tlvlslash;
}

int Scythe::getLongcuttingpower()
{
	return longcuttingpower;
}
void Scythe::setLongcuttingpower(int tLongcuttingpower){
	longcuttingpower=tLongcuttingpower;
}

string Scythe::getTipo()
{
	return "Scythe"; 
}

//poli
int Scythe::atacar()
{
	GodArcs::getLvlatack()+lvlslash;
}