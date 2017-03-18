#include "Scythe.h"


Scythe::Scythe(int plvlatack, string pkindelement, int plvlpierce, int pspeedcutpower) : GodArcs( plvlatack, pkindelement)
{
	lvlpierce=plvlpierce;
	speedcutpower=pspeedcutpower;
}

int Scythe::getLvlpierce()
{
	return lvlpierce;
}
void Scythe::setLvlpierce(int tlvlpierce)
{
	lvlpierce=tlvlpierce;
}

int Scythe::getSpeedcutpower()
{
	return speedcutpower;
}
void Scythe::setSpeedcutpower(int tspeedcutpower){
	speedcutpower=tspeedcutpower;
}
