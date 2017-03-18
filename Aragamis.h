#include <string>

#ifndef ARAGAMIS_H
#define ARAGAMIS_H

using namespace std;

class Aragamis
{
	private:
		string nombre;
		int cantvida;
		int lvldefensa;
		string kindelement;
		int lvlatack;

	public:
		Aragamis();
		Aragamis(string,int,int,string,int);
		~Aragamis();

		string getNombre();
		void setNombre(string);

		int getCantvida();
		void setCantvida(int);

		int getLvldefensa();
		void setLvldefensa(int);

		string getKindelement();
		void setKindelement(string);

		int getLvlatack();
		void setLvlatack(int);
};
#endif