#include <iostream>
using namespace std;


void edad();
void resultado(int x);
int calculo(int x);

int anionacimiento;

int main()
{
int total;
edad();
total=calculo(anionacimiento);
cout<<"Su edad es: "<<total<<endl;
resultado(total);
return 0;		
}

void edad()
{	
	cout<<"Ingrese su año de nacimiento: ";
	cin>>anionacimiento;	
}
int calculo(int x)
{
	int total;
	total=(2021-x);
	return total;	
}
void resultado(int x)
{
	if((x >= 1)&&(x <= 5))
	{
		cout<<"Eres un Infante";
	}
	else if((x >= 6)&&(x <= 10))
	{
		cout<<"Estas en la Niñez";
	}
	else if((x >=11)&&(x <= 20))
	{
		cout<<"Estas en la Adolescencia";
	}
	else if((x >= 21)&&(x <= 50))
	{
		cout<<"Eres un Adulto";
	}
	else if(x > 50)
	{
		cout<<"Es un adulto Mayor";
	}	
	
}
