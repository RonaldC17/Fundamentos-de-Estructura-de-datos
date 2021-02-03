#include <iostream>
#define desayuno_comienza 6
#define desayuno_termina 9
#define almuerzo_comienza 12
#define almuerzo_termina 15
#define cena_comienza 19
#define cena_termina 21

using namespace std;
 
int main()
{ 
int horaactual;
cout<<"que hora es: ";
cin>>horaactual;

if((desayuno_comienza<=horaactual)&&(horaactual<=desayuno_termina))
	{
	cout<<" Es hora de desayunar";
	}
else if((almuerzo_comienza<=horaactual)&&(horaactual<=almuerzo_termina))
	{
	cout<<" Es hora de almorzar";
	}

else if((cena_comienza<=horaactual)&&(horaactual<=cena_termina))
	{
	cout<<" Es hora de cenar";
	}
else
	{	
	cout<<"No es hora de comer";
	}
return 0;
    


}

//Hola a todos 
