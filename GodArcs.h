#include <string>

#ifndef GODARCS_H
#define GODARCS_H

using namespace std;

class GodArcs
{
	protected:
		int lvlatack;
		string kindelement;

	public:
		GodArcs();
		GodArcs(int,string);
	
		int getLvlatack();
		void setLvlatack(int);

		string getKindelement();
		void setKindelement(string);

		virtual string getTipo();
		virtual int atacar();
};
#endif