//Utilizando las librerias
#include <iostream> 
using namespace std;


int main()
{
//Definiendo las variables con flotante
float x1,y1,r1,x2,y2,r2,y,x,z,xr,yr,zr;

cout<<"Imprimir si las ecuaciones lineales tienen o no la misma grafica\n\n";
cout<<"Primera ecuacion: \n";
cout<<"7x-y+9 \n";
cout<<"Segunda ecuacion: \n";
cout<<"-21x+3y-12\n";
cout<<"--Primera ecuacion--\n\n";
cout<<"Inserta el valor de X: ";
//Guardando el valor de x en "x1"
cin>>x1;
//Guardando el valor de y en "y1"
cout<<"Inserta el valor de Y: ";
cin>>y1;
//Guardando el valor del resultado  en "r1"
cout<<"Inserta el resultado: ";
cin>>r1;
cout<<endl<<endl;


cout<<"Segunda ecuacion"<<endl;
//Guardando el valor de x en "x2"
cout<<"Inserta el valor de X: ";
cin>>x2;
//Guardando el valor de y en "y2"
cout<<"Inserta el valor de Y: ";
cin>>y2;
//Guardando el valor del resultado en "r2"
cout<<"Inserta el resultado: ";
cin>>r2;
cout<<endl<<endl;


x=-x2*x1;
y=-x2*y1;
z=-x2*r1;

xr=x1*x2;
yr=x1*y2;
zr=x1*r2;

x=x+xr;
y=y+yr;
z=z+zr;
y=z/y;

z=r1-y*y1;
x=z/x1;


if (x==y)
{
	cout << "Tienen la misma grafica,son iguales";
}
if (x!=y)
{
	cout << "Tienen diferente grafica";
}

system("pause");

return 0;
}
