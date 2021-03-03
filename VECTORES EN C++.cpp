//array o vectores
#include "iostream"
#include "conio.h"
#include "string.h"//manejo de caracteres
#include "ctype.h"//manejo de numeros aleatorios
using namespace std;

int main()
{
	int n, suma=0;
	cout<<"Digite las posiciones del vector o arreglo: ";
	cin>>n;
	int numeros[n];
	
	//llenado del vector
	for(int i=0;i<n;i++)
	{
		cout<<"Digite numero: ";
		cin>>numeros[i]; //Guardamos los elementos en la posición
	}
    //mostrar los datos del ARRAY
    for(int i=0;i<n;i++)
	{
		cout<<i<<"  ->"<<numeros[i]<<endl;
	} 
	
	//sumar elementos
	    for(int i=0;i<n;i++)
	{
		suma += numeros[i]; //realizando la suma
		cout<<"  "<<suma<<endl;
	} 
	cout<<"La suma de los elementos es: "<<suma;
	
	
		
getch();
return 0;		
}
