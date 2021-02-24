#include "iostream"

using namespace std;

int resultado(int i);
int resultado_dos(int i);
int i;


int main()
{
resultado(i);
cout<<endl<<endl;
resultado_dos(i);
}

int resultado(int i)
{
	
	for(int i=1;i<=100;i++)
    {
        cout << i << endl;
    }
    return 0 ;
}
int resultado_dos(int i)
{
	for(int i=100;i>=1;i--)
    {
        cout << i << endl;
    }
    return 0;
}
