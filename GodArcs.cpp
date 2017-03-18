#include "GodArcs.h"
#include <iostream>
#include <string>


GodArcs::GodArcs(int plvlatack, string pkindelement)
{
	lvlatack=plvlatack;
	kindelement=pkindelement;
}

int GodArcs::getLvlatack()
{
	return lvlatack;
}
void GodArcs::setLvlatack(int tlvlatack)
{
	lvlatack=tlvlatack;
}

string GodArcs::getKindelement()
{
	return kindelement;
}
void GodArcs::setKindelement(int tKindelement)
{
	kindelement=tKindelement;
}

