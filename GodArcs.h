#include <string>

#ifndef GODARCS_H
#define GODARCS_H

using namespace std;

class GodArcs
{
	protected:
		int lvlatack;
		string tipoelemento;

	public:
		GodArcs();
		GodArcs(int,string);
	
		int getLvlatack();
		void setLvlatack(int);

		string getKindelement();
		void setstKindelement();


};
#endif