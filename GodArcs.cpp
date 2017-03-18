#include "GodArcs.h"
#include <iostream>
#include <string>

using namespace std;

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
void GodArcs::setKindelement(string tKindelement)
{
	kindelement=tKindelement;
}

//poli del papi

string GodArcs::getTipo(){

	return "";
}

int GodArcs::atacar()
{
	return 0;
}
