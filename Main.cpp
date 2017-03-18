#include "GodArcs.h"
#include "Bustersword.h"
#include "Scythe.h"
#include "Shortsword.h"
#include "Aragamis.h"
#include "GodEaters.h"

#include <string>
#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

void listarGodarcs(vector <GodArcs*> listaGodarcsT);
void listarAragamis(vector <Aragamis*> listaAragamisT);
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
				cout<<endl<<"************************************************"<<endl;
				cout<<"¿Que desea ingresar?\n1.-Gestión de GodArcs\n2.-Gestión de GodEaters\n3.-Gestión de Aragamis\n4.-salir de ingresar\ningrese su opcion: ";
				cin>>respingresar;
				cout<<endl;

				if (respingresar==1)//agregando godarcs
				{
					int atacklvl;
					cout<<"Ingrese el nivel de ataque: ";
					cin>>atacklvl;
					string tipoelemento;
					int typeel=9;
					while(typeel<0 || typeel>3)
					{
						cout<<"Ingrese el tipo de elemento\n1.-Divine\n2.-Blaze\n3.-Freeze\n";
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
							int crushatacklvl;
							cout<<"Ingrese el nivel de ataque crush: ";
							cin>>crushatacklvl;
							int explosivepower;
							cout<<"Ingrese el nivel del poder explosivo: ";
							cin>>explosivepower;

							listaGodarcs.push_back(new Bustersword(atacklvl,tipoelemento, crushatacklvl,explosivepower));
					
						}//fin de Buster
						if (type==2)
						{
							int slashlvl;
							cout<<"Ingrese el nivel de ataque slash: ";
							cin>>slashlvl;
							int cuttingpower;
							cout<<"Ingrese su poder de corte largo: ";
							cin>>cuttingpower;

							listaGodarcs.push_back(new Scythe(atacklvl,tipoelemento, slashlvl,cuttingpower));
					
						}//fin de slyeso
						if (type==3)
						{
							int pearcelvl;
							cout<<"Ingrese el nivel de ataque pearce: ";
							cin>>pearcelvl;
							int speedcutpower;
							cout<<"Ingrese su poder de speed cut: ";
							cin>>speedcutpower;

							listaGodarcs.push_back(new Shortsword(atacklvl,tipoelemento, pearcelvl,speedcutpower));
					
						}//fin de Buster
					}
				cout<<endl<<"¡GodArcs ingresado con exito!"<<endl;	
				}//fin de agregar godarcs

				if (respingresar==2)//agregando Eaters
				{

					cout<<endl<<"bienaventurado"<<endl;
					string nombre;
					cout<<"Ingrese nombre: ";
					cin>> nombre;
					int actuallvl;
					cout<<"Ingrese el nivel actual: ";
					cin>>actuallvl;
					int cantvida=actuallvl*50;
					int defensalvl=actuallvl*20;

					listarGodarcs(listaGodarcs);
					int numgodarc;
					cout<<endl<<"Ingrese el numero de GodArcs que desea: ";
					cin>>numgodarc;

					GodArcs* godarc;
					godarc=listaGodarcs.at(numgodarc);

					listaGodeaters.push_back(new GodEaters(nombre,cantvida, actuallvl,defensalvl,godarc));
					
					cout<<endl<<"¡GodEater ingresado con exito!";

				}// fin de agregando godEaters

				if (respingresar==3)//agregando aragamis
				{
					cout<<endl<<"////// BIENVENIDO A LOS ARAGAMIS ///////";

					string anombre;
					cout<<"Ingrese nombre: ";
					cin>> anombre;
					int acantvida;
					cout<<"Ingrese la cantidad de vida: ";
					cin>>acantvida;	
					int adefensalvl;
					cout<<"Ingrese el nivel de defensa: ";
					cin>>adefensalvl;
					string atipoelemento;
					int atypeel=9;
					while(atypeel<0 || atypeel>3)
					{
						cout<<endl<<"Ingrese el tipo de elemento\n1.-Divine\n2.-Blaze\n3.-Freeze\n";
						cin>>atypeel;
						if (atypeel==1)
						{
							atipoelemento="Divine";
						}
						if (atypeel==2)
						{
							atipoelemento="Blaze";
						}
						if (atypeel==3)
						{
							atipoelemento="Freeze";
						}
					}//fin de tipodeelemento
					int aatacklvl;
					cout<<"Ingrese nivel de ataque";
					cin>>aatacklvl;

					listaAragamis.push_back(new Aragamis(anombre,acantvida,adefensalvl,atipoelemento,aatacklvl));
					cout<<endl<<"¡Aragami ingresado con exito!";

				}//fin de agregando aragamis
			}

		}//fin de ingresar

		if (resp==2)//Modificar
		{
			/* code */
		}// fin de modificar

		if (resp==3)//Eliminar
		{
			cout<<endl<<"xxxxxxxxxxx BIENENIDO AL ABISMO DE LOS LAMENTOS xxxxxxxxxxxxx";

			cout<<"¿Que es lo que desea sacrificars?\n1.-Gestión de GodArcs\n2.-Gestión de GodEaters\n3.-Gestión de Aragamis\n4.-salir de ingresar\ningrese su opcion: ";
				

			cout<<endl<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
		}//fin de eliminar

		if (resp==4)//SIMULACION
		{
			/* code */
		}//FIN DE SIMULACION

	}
	return 0;
}

void listarGodarcs(vector <GodArcs*> listaGodarcsT)
{
	cout<<endl<<"----------LISTA DE GODARCS---------------------";
	for (int i = 0; i < listaGodarcsT.size(); ++i)
	{
		cout << endl<<"     GodArcs numero: " << (i) << endl;

		if (listaGodarcsT.at(i)->getTipo()=="Bustersword")
		{
			cout<<"Tipo de GodArcs: Bustersword"<<endl;

		}else if (listaGodarcsT.at(i)->getTipo()=="Scythe")
		{
			cout<<"Tipo de GodArcs: Scythe"<<endl;
		}else if (listaGodarcsT.at(i)->getTipo()=="Shortsword")
		{
			cout<<"Tipo de GodArcs: Shortsword"<<endl;
		}else
		{
			cout<<"prueba"<<endl;
		}

		cout << "Elemento: " << listaGodarcsT.at(i) -> getKindelement() << endl;
		
		cout << "----------------------------------------------" << endl;
	}
}
void listarAragamis(vector <Aragamis*> listaAragamisT)
{
	cout<<endl<<"----------LISTA DE Aragamis---------------------";
	for (int i = 0; i < listaAragamisT.size(); ++i)
	{
		cout << endl<<"        Aragami numero: " << (i) << endl;
		cout << endl<<"Nombre: "<<listaAragamisT.at(i)->getNombre()<<endl;
		cout << endl<<"Cantidad de vida: "<<listaAragamisT.at(i)->getCantvida();
		cout << endl<<"Defensa: "<<listaAragamisT.at(i)->getLvldefensa();
		cout << endl<<"Elemento: "<<listaAragamisT.at(i)->getKindelement();
		cout << endl<<"Ataque: "<<listaAragamisT.at(i)->getLvlatack();

		cout << "----------------------------------------------" << endl;
	}
}
void listaGodeaters(vector <GodEaters*> listaGodeatersT)
{
	cout<<endl<<"----------LISTA DE GODEATERS---------------------";
	for (int i = 0; i < listaGodeatersT.size(); ++i)
	{
		cout << endl<<"        GodEaters numero: " << (i) << endl;
		cout << endl<<"Nombre: "<<listaGodeatersT.at(i)->getNombre()<<endl;
		cout << endl<<"Cantidad de vida: "<<listaGodeatersT.at(i)->getCantidadvida();
		cout << endl<<"Nivel actual: "<<listaGodeatersT.at(i)->getLvlactual();
		cout << endl<<"Defensa: "<<listaGodeatersT.at(i)->getLvldefensa();
		cout << endl<<"GodArc: "<<listaGodeatersT.at(i)->getGodarcs()->getTipo();
			

		cout << "----------------------------------------------" << endl;
	}
}