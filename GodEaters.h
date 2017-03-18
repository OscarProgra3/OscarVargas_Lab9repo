#include <string>
#include "GodArcs.h"

#ifndef GODEATERS_H
#define GODEATERS_H

using namespace std;

class GodEaters
{
	private:
		string nombre;
		int cantvida;
		int lvlactual;
		int lvldefensa;
		GodArcs* godarc;

	public:
		GodEaters();
		GodEaters(string,int,int,int,GodArcs*);
		~GodEaters();
		
		string getNombre();
		void setNombre(string);

		int getCantidadvida();
		void setCantidadvidad(int);

		int getLvlactual();
		void setLvlactual(int);

		int getLvldefensa();
		void setLvldefensa(int);

		GodArcs* getGodarcs();
		void setGodarcs(GodArcs*);


};
#endif