#include "Shortsword.h"


Shortsword::Shortsword(int plvlatack, string pkindelement, int plvlpierce, int pspeedcutpower) : GodArcs( plvlatack, pkindelement)
{
	lvlpierce=plvlpierce;
	speedcutpower=pspeedcutpower;
}

int Shortsword::getLvlpierce()
{
	return lvlpierce;
}
void Shortsword::setLvlpierce(int tlvlpierce)
{
	lvlpierce=tlvlpierce;
}

int Shortsword::getSpeedcutpower()
{
	return speedcutpower;
}
void Shortsword::setSpeedcutpower(int tspeedcutpower)
{
	speedcutpower=tspeedcutpower;
}

string Shortsword::getTipo()
{
	return "Shortsword"; 
}

//poli
int Shortsword::atacar()
{
	GodArcs::getLvlatack()+lvlpierce;
}