#include "GodArcs.h"
#include "Bustersword.h"
#include "Scythe.h"
#include "Shortsword.h"
#include "Aragamis.h"
#include "GodEaters.h"

#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<GodArcs*> listaGodarcs;
	vector<Aragamis*> listaAragamis;
	vector<GodEaters*> listaGodeaters;

	int resp=6;
	while(resp!=5)
	{
		cout<<endl<<"-----------------------------"<<endl;
		cout<<"Bienvenido señor sakaki \n ¿Que es lo que desea hacer? \n1.-Ingresar\n2.-Modificar\n3.-Eliminar\n4.- Simulacion\n5.-Salir\nElija su opcion: ";
		cin>>resp;
		if (resp==1)//ingresar
		{
			int respingresar=6;
			while(respingresar!=4)
			{
				cout<<endl;
				cout<<"¿Que desea ingresar?\n1.-Gestión de GodArcs\n2.-Gestión de GodEaters\n3.-Gestión de Aragamis\n4.-salir de ingresar\ningrese su opcion: ";
				cin>>respingresar;

				if (respingresar==1)//agregando godarcs
				{
					
				}


			}

		}//fin de ingresar

		if (resp==2)//Modificar
		{
			/* code */
		}// fin de modificar

		if (resp==3)//Eliminar
		{
			/* code */
		}//fin de eliminar

	}
	return 0;
}