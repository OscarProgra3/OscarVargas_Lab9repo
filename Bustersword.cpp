#include "Bustersword.h"


Bustersword::Bustersword(int plvlatack, string pkindelement, int plvlcrushatack, int pexplosivepower) : GodArcs( plvlatack, pkindelement)
{
	lvlcrushatack=plvlcrushatack;
	explosivepower=pexplosivepower;
}

int Bustersword::getLvlcrushatack()
{
	return lvlcrushatack;
}
void Bustersword::setLvlcrushatack(int tlvlcrushatack)
{
	lvlcrushatack=tlvlcrushatack;
}

int Bustersword::getExplosivepower()
{
	return explosivepower;
}
void Bustersword::setExplosivepower(int texplosivepower)
{
	explosivepower=texplosivepower;
}

string Bustersword::getTipo()
{
	return "Bustersword"; 
}


int Bustersword::atacar()
{
	return GodArcs::getLvlatack()+lvlcrushatack;
}

