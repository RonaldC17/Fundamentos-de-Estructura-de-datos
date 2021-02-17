#include <iostream>
using namespace std;

void datos();
void resultado(float x);
float calcular(float x, float y);

float peso, estatura;

int main()
{
float total;		
datos();
total=calcular(peso, estatura);
cout<<"Su indice de masa corporal es: "<<calcular(peso, estatura)<<endl;
resultado(total);
return 0;
}		
void datos()
{	
	cout<<"Ingrese su Peso corporal en Kg: ";
	cin>>peso;
	cout<<"Ingrese su estatura en M: ";
	cin>>estatura;		
}
float calcular(float x, float y)
{	
    float total;
	total = (x/(y*y));
	//cout<<"Su Peso corporal es: "<<total<<endl;
	return total;		
}
void resultado(float x)
{
	if(x <= 18.5)
	{
		cout<<"Tiene bajo peso";
	}
	else if((x >=18.5)&&(x <= 24.9))
	{
		cout<<"Tiene peso normal";
	}
	else if((x >=25)&&(x <= 29.9))
	{
		cout<<"Tiene sobrepeso";
	}
	else if(x >= 30)
	{
		cout<<"Tiene Obesidad";
	}	
}


















