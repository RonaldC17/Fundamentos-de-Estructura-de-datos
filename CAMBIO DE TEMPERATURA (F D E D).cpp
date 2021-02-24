#include "iostream"
#include "conio.h"
using namespace std;
//prototipos de la función
void pedirDatos();

template<class DATO>//Plantilla de Función //paso de parametros por valor
void convertir(DATO X);

void convertirkelvin(float&); //paso de parametros por referencia

void convertir_r(float,float&,float&);

//Variables globales
float n1;

int main()
{
	
//Llamados de la función	
pedirDatos();
convertir(n1);	
convertirkelvin(n1);

//cout<<"Memoria"<<&n1;
float reamur=0, rankine=0;	
cout<<"Los valores iniciales son:"<<reamur<<"  "<<rankine<<endl;
cout<<"Memoria "<<&reamur<<endl;
cout<<"Memoria "<<&rankine<<endl;	
convertir_r(n1,reamur,rankine);
cout<<"Los valores nuevos son:"<<reamur<<"  "<<rankine<<endl;

cout<<"Memoria r: "<<&reamur<<endl;
cout<<"Memoria r: "<<&rankine<<endl;
	getch();
	return 0;	
}

//Construccion de la función
void pedirDatos()
{
	cout<<"Digite su temperatura actual para calcular:"<<endl;
	cin>>n1;	
}
template<class DATO>
void convertir(DATO x)
{
	x=(x*9/5)+32;
	cout<<"En Grados Fahrenheit "<<x<<endl;
}
void convertirkelvin(float& y)
{
	y=y+273.15;
	cout<<"La temperatura en Kelvin es:"<<y<<endl;	
}
void convertir_r(float x,float& reamur,float& rankine)
{
	reamur=x*1.8;
	rankine=(x*1.8)+491.67;	
}
