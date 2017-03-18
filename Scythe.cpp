#include "Scythe.h"


Scythe::Scythe(int plvlatack, string pkindelement, int plvlpierce, int pspeedcutpower) : GodArcs( plvlatack, pkindelement)
{
	lvlpierce=plvlpierce;
	speedcutpower=pspeedcutpower;
}

int getLvlpierce()
{
	return lvlpierce;
}
void setLvlpierce(int tlvlpierce)
{
	lvlpierce=tlvlpierce;
}

int getSpeedcutpower()
{
	return speedcutpower;
}
void setSpeedcutpower(int tspeedcutpower){
	speedcutpower=tspeedcutpower;
}
