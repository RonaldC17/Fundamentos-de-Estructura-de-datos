#include "iostream"
#include "conio.h"

using namespace std;
  
int main()
{	
	int valor,valor1,valor3,valor5,valor7,numero;

	do
	{	
	cout<<"Ingrese el valor a ingresar: ";
	cin>>valor;
	cout<<"Ingrese otro valor a ingresar: ";
	cin>>valor1;
	cout<<"Digite el caso que quiera realizar: "<<endl;
	cout<<"1 para sumar: "<<endl;
	cout<<"2 para restar: "<<endl;
	cout<<"3 para multiplicar: "<<endl;
	cout<<"4 para salir del programa pero no le da operacion: "<<endl;		
	cin>>numero;
	switch(numero)
	{
		case 1:
			
			valor3=valor+valor1;
			cout<<"La suma es: "<<valor3<<endl;
			system("PAUSE");
			system("cls");
			break;
				
		case 2:
			valor5=valor-valor1;
			cout<<"La resta es: "<<valor5<<endl;
			system("PAUSE");
			system("cls");
			break;
				
		case 3:	
			valor7=valor*valor1;
			cout<<"La multiplicación es: "<<valor7<<endl;
			system("PAUSE");
			system("cls");
			break;
			   
	}
	}while(numero!=4);
	cout<<"Salio del Programa";
	
	
}
