#include <string>
#include "GodArcs.h"

#ifndef SCYTHE_H
#define SCYTHE_H

using namespace std;

class Scythe : public GodArcs
{
	private:
		int lvlslash;
		int longcuttingpower; 
	public:
		Scythe();
		Scythe(int, string, int, int);
	
		int getLvlslash();
		void setLvlslash(int);

		int getLongcuttingpower();
		void setLongcuttingpower(int);

		virtual int atacar();

};

#endif