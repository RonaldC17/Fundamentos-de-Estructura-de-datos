#include "iostream"
#include "conio.h"
using namespace std;
//Prototipo Funcion     Nombre, tipo datos, numero de variables

void pedirDatos();
void potencia(int a, int b);

//variables global
int base,expo;

int main()
{
// Llamado de las funciones	
pedirDatos();
potencia(base,expo);
getch();			
return 0;
   
   	
}
// Definicion de la función

void pedirDatos(){
	cout<<"Ingrese la Base: ";
	cin>>base;
	cout<<"Digite el exponente: ";
	cin>>expo;	
}

void potencia(int a, int b){
    double	result=1; //variable local de la función
    for(int i=1;i<b;i++)
	{
    	result *=a;
	}
    cout<<"El resultado es: "<<result;    
}




