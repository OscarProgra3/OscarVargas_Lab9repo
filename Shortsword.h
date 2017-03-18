#include <string>
#include "GodArcs.h"

#ifndef SHORTSWORD_H
#define SHORTSWORD_H

using namespace std;

class Shortsword : public GodArcs
{
	private:
		int lvlpierce;
		int speedcutpower; 
	public:
		Shortsword();
		Shortsword(int, string, int, int);
	
		int getLvlpierce();
		void setLvlpierce(int);

		int getSpeedcutpower();
		void setSpeedcutpower(int);

};

#endif