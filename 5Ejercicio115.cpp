#include <iostream> //librerias
using namespace std;

int main()
{
float x1,y1,re1,x2,y2,re2,y,x,z,xr,yr,zr;

cout<<"----ECUACIÓN CON 2 INCOGNITAS----\n\n";
cout<<"--Primera ecuación--\n";
cout<<"--109x+71y-260--\n";
cout<<"Inserta el valor de X: ";
cin>>x1;
cout<<"Inserta el valor de Y: ";
cin>>y1;
cout<<"Inserta el resultado: ";
cin>>re1;
cout<<endl<<endl;
cout<<"Segunda ecuación"<<endl;
cout<<"-89x+29y+18"<<endl;
cout<<"Inserta el valor de X: ";
cin>>x2;
cout<<"Inserta el valor de Y: ";
cin>>y2;
cout<<"Inserta el resultado: ";
cin>>re2;
cout<<endl<<endl;
x=-x2*x1;
y=-x2*y1;
z=-x2*re1;

xr=x1*x2;
yr=x1*y2;
zr=x1*re2;

x=x+xr;
y=y+yr;
z=z+zr;
y=z/y;

z=re1-y*y1;
x=z/x1;

cout<<"--EL VALOR DE X ES: "<<x<<endl;
cout<<"EL VALOR DE Y ES: "<<y<<endl;


system("pause");

return 0;
}