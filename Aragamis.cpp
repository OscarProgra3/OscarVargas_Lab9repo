#include "Aragamis.h"

Aragamis::Aragamis(string pnombre, int pcantvida, int plvldefensa, string pkindelement, int plvlatack)
{
	nombre=pnombre;
	cantvida=pcantvida;
	lvldefensa=plvldefensa;
	kindelement=pkindelement;
	lvlatack=plvlatack;

}

string Aragamis::getNombre(){
	return nombre;
}
void Aragamis::setNombre(string tnombre)
{
	nombre=tnombre;
}

int Aragamis::getCantvida()
{
	return cantvida;
}
void Aragamis::setCantvida(int tcantvida)
{
	cantvida=tcantvida;
}


int Aragamis::getLvldefensa()
{
	return lvldefensa;
}
void Aragamis::setLvldefensa(int tlvldefensa)
{
	lvldefensa=tlvldefensa;
}

string Aragamis::getKindelement()
{
	return kindelement;
}
void Aragamis::setKindelement(string tkindelement)
{
	kindelement=tkindelement;
}

int Aragamis::getLvlatack()
{
	return lvlatack;
}
void Aragamis::setLvlatack(int tlvlatack)
{
	lvlatack=tlvlatack;
}