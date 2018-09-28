/*
HACER UN PROGRAMA QUE LEA N TRABAJADORES, POR CADA TRABAJADOR SE DEBE LEER EL SUELDO Y LA CATEGORIA; CALCULAR E IMPRIMIR EL NUEVO SUELDO DEPENDIENDO DE LA SIGUIENTE TABLA. ADEMAS SE DEBE MOSTRAR AL FINAL LA CANTIDAD DE TRABAJADORES POR CADA CATEGORIA Y LA SUMA TOTAL DE TODOS LOS SUELDOS POR CADA CATEGORIA.


cat                  %incremento
10                    5%
20                    8%
30                    15%
40                    21%
50                    26%

*/



#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<string>
void main(){
int n,cat,i;
float cat1,cat2,cat3,cat4,cat5,cat10,cat20,cat30,cat40,cat50,sueldo;

cout<<" Ingrese el numero de trabajadores: ";
cin>>n;

for(i=1;i<=n;i=i+1){
cout<<"\n";
cout<<" Digite la categoria: ";
cin>>cat;



switch(cat){

cat1=0;
cat2=0;
cat3=0;
cat4=0;
cat5=0;

cat10=0;
cat20=0;
cat30=0;
cat40=0;
cat50=0;


case 10:
cout<<"Ingrese su sueldo:";
cin>>sueldo;
sueldo=sueldo+(sueldo*0.05);
cat1=cat1+1;
cat10=cat10+sueldo;
cout<<"El sueldo nuevo fue de:"<<sueldo;
cout<<"\n";

break;

case 20:
cout<<"Ingrese su sueldo:";
cin>>sueldo;
sueldo=sueldo+(sueldo*0.08);
cat2=cat2+1;
cat20=cat20+sueldo;
cout<<"El sueldo nuevo fue de:"<<sueldo;
cout<<"\n";

break;

case 30:
cout<<"Ingrese su sueldo:";
cin>>sueldo;
sueldo=sueldo+(sueldo*0.15);
cat3=cat3+1;
cat30=cat30+sueldo;
cout<<"El sueldo nuevo fue de:"<<sueldo;
cout<<"\n";
break;

case 40:
cout<<"Ingrese su sueldo:";
cin>>sueldo;
sueldo=sueldo+(sueldo*0.21);
cat4=cat4+1;
cat40=cat40+sueldo;
cout<<"El sueldo nuevo fue de:"<<sueldo;
cout<<"\n";
break;

case 50:
cout<<"Ingrese su sueldo:";
cin>>sueldo;
sueldo=sueldo+(sueldo*0.26);
cat5=cat5+1;
cat50=cat50+sueldo;
cout<<"El sueldo nuevo fue de:"<<sueldo;
cout<<"\n";

break;

default:

cout<<"NO REGISTRADO ";
break;
}       //final switch

} //final for

cout<<"\n";
cout<<"El sueldo total de categoria 10 fue de:"<<cat10;
  cout<<"\n";
  cout<<"El sueldo total de categoria 20 fue de:"<<cat20;
  cout<<"\n";
cout<<"El sueldo total de categoria 30 fue de:"<<cat30;
  cout<<"\n";
cout<<"El sueldo total de categoria 40 fue de:"<<cat40;
  cout<<"\n";
  cout<<"El sueldo total de categoria 50 fue de:"<<cat50;

  cout<<"\n";
  cout<<"Fueron:"<<cat1<<" de categoria 10";
  cout<<"\n";
  cout<<"Fueron:"<<cat2<<" de categoria 20";
    cout<<"\n";
  cout<<"Fueron:"<<cat3<<" de categoria 30";
    cout<<"\n";
  cout<<"Fueron:"<<cat4<<" de categoria 40";
    cout<<"\n";
  cout<<"Fueron:"<<cat5<<" de categoria 50";

 getch();
 }


