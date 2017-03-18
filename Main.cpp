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
					int atacklvl;
					cout<<"Ingrese el nivel de ataque: ";
					cin>>atacklvl;
					string kindelement;
					string tipoelemento;
					int typeel=9;
					while(typeel<0 || typeel>3)
					{
						cout<<"Ingrese el tipo de elemento\n1.-Divine\n2.-Blaze\n3.-Freeze";
						cin>>typeel;
						if (typeel==1)
						{

							tipoelemento="Divine";
						}
						if (typeel==2)
						{
							tipoelemento="Blaze";
						}
						if (typeel==3)
						{
							tipoelemento="Freeze";
						}

					}//fin de tipodeelemento

					int type=9;
					while(type<0 || type>3)
					{
						cout <<"¿Que tipo de GodArc desea?\n1.-Buster sword\n2.-Scythe\n3.-Short sword";
						cin>>type;
						if (type==1)
						{
							
						}//fin de Buster

					}
					
				}//fin de agregar godarcs


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