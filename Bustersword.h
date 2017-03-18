#include <string>
#include "GodArcs.h"

#ifndef BUSTERSWORD_H
#define BUSTERSWORD_H

using namespace std;

class Bustersword : public GodArcs
{
	private: 
		int lvlcrushatack;
		int explosivepower; 
	public:
		Bustersword();
		Bustersword(int, string, int, int);
		
		int getLvlcrushatack();
		void setLvlcrushatack(int);

		int getExplosivepower();
		void setExplosivepower(int);

		string getTipo();

		//poli
		virtual int atacar();

};
#endif