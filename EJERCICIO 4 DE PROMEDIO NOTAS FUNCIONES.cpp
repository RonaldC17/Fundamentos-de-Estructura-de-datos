#include <iostream>
#include "conio.h"
using namespace std;

void datos();
void resultado();
float operacion(float a,float b);

float nota1, nota2, nota3, total, promedio1, promedio2,promedio3, promediototal;

int main()

{
float total;
datos();
resultado();
operacion(nota1, nota2, nota3, total, promedio1, promedio2,promedio3, promediototal);
total=operacion(nota1, nota2, nota3, total, promedio1, promedio2,promedio3, promediototal);

}
void datos()
{
    cout<<"Ingrese su primera nota";
    cin>>nota1;
    cout<<"Ingrese su segunda nota";
    cin>>nota2;
    cout<<"Ingrese su tercera nota";
    cin>>nota3; 
    total=nota1+nota2+nota3;
    cout<<"Su nota final es: "<<total<<endl;
}
float operacion()
{
   
   promedio1=nota1*0.35;
   promedio2=nota2*0.35;
   promedio3=nota3*0.30;
   promediototal=promedio1+promedio2+promedio3;
   cout<<"Su promedio definitivo es: "<<promediototal<<endl;	
}
void resultado()
{
	
	if(promediototal<=2.9)
	{
		cout<<"Reprobo";
	}
	else if((promediototal>=3)&&(promediototal<=4.5))
	{
		cout<<"Aprobó";
	}
	else if(promediototal>4.5)
	{
		cout<<"Excelente";
    }
	
}
