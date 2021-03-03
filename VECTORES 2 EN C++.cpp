#include "iostream"
#include "conio.h"
#include "ctime"
#include "cstdlib"
using namespace std;
//Prototipo función
void llenado_vector(int vec[],int); //parametro int es el numero de posiciones
void muestra_vector(int vec[],int);
void suma_vector(int vec[],int);
void inverso_vector(int vec[],int);
void ordenado_vector(int vec[],int);
int suma;

int main()
{
	int n;
	cout<<"Digite el numero de posiciones: ";
	cin>>n;
	int numeros[n];
	llenado_vector(numeros,n);
	//llamado de la función	
	muestra_vector(numeros,n);
	suma_vector(numeros,n);
	inverso_vector(numeros,n);
}

//construcción función
void llenado_vector(int numeros[],int n)
{
	
	for(int i=0; i<n; i++)
	{
		numeros[i]=rand() % 50 +1;
	}
	
}
void muestra_vector(int numeros[],int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<i<<" ->  "<<numeros[i]<<endl;
	}	
}
void suma_vector(int numeros[],int n)
{
	int suma=0;
	for(int i=0; i<n; i++)
	{
		suma+=numeros[i];		
	}
	cout<< "La suma de los elementos es: "<<suma;
}
void inverso_vector(int numeros[],int n)
{
	for(int i=n; i>=0; i--)
	{
		cout<<numeros[i]<<endl;
	}
}

