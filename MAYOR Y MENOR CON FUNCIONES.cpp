#include "iostream"
#include "conio.h"
#include "string.h"//manejo de caracteres
#include "ctype.h"//manejo de numeros aleatorios
using namespace std;

void elmayor(int vec[],int);
void elmenor(int vec[],int);
int mayor,menor;

int main()
{
	int n;
	cout<<"Digite las posiciones del vector o arreglo: ";
	cin>>n;
	int numeros[n];
	elmayor(numeros,n);
	elmenor(numeros,n);
	
getch();
return 0;		
}
void elmayor(int numeros[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Digite numero: ";
		cin>>numeros[i]; 
		if(numeros[i] > mayor)
		{
			mayor = numeros[i];
		}
	}
	cout<<"El numero mayor es: "<<mayor<<endl;	
}
void elmenor(int numeros[], int n)
{
	menor=0;
		for(int i=0;i<n;i++)
	{
		if(numeros[i] < menor)
		{
			menor=numeros[i];
		}
    }
	cout<<"El numero Menor es: "<<menor<<endl;
}
