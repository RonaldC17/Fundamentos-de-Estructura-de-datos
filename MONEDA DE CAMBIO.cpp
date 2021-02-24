// una casa de cambio requiere convertir pesos a dolares e indicar en numero de billetes a entregar al cliente
// dolares 100, 50,20,10,5,1

#include "iostream"
#include "conio.h"
using namespace std;
//prototipos de la función
int convertir(int); //valor

void cambio(int, int&, int&,int&, int&, int&,int&); //referencia   espacio de memoria

//Variables globales
int valor;

int main()
{
		
int pesos, cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;
cout<<"Digite su valor a convertir us$ "<<endl;
cin>>pesos;

//Llamados de la función
convertir(pesos);
cout<<"Su valor en dolares es: "<<valor<< endl;

cambio(valor, cien, cincuenta, veinte,diez,cinco,uno);
cout<<"La cantidad de billetes a entregar es: "<<endl;
cout<<"cien: "<<cien<<endl;
cout<<"cincuenta: "<<cincuenta<<endl;
cout<<"veinte: "<<veinte<<endl;
cout<<"diez: "<<diez<<endl;
cout<<"cinco: "<<cinco<<endl;
cout<<"uno: "<<uno<<endl;

	getch();
	return 0;	
}

//Construccion de la función
int convertir(int x)
{
	valor=x/3586;
	return valor;	
}
void cambio(int valor, int& cien, int& cincuenta,int& veinte, int& diez, int& cinco, int& uno)
{
	cien=valor/100;
	valor%=100;
	
	cincuenta=valor/50;
	valor%=50;
	
	veinte=valor/20;
	valor%=20;
	
	diez=valor/10;
	valor%=10;
	
	cinco=valor/5;
	uno=valor%1;
}


	



