/*
HACER UN PROGRAMA QUE LEA UN CAPITAL ( c ), Y QUE AVERIGUE E IMPRIMA EN CUANTOS MESES ESTE SE TRIPLICA SI LO COLOCAMOS A UN INTERES COMPUESTO DEL 4% MENSUAL
*/

#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<string>
void main(){
float c,t,a;
int m;
cout<<"Ingrese el capital: ";
cin>>c;
t=(c*3);
m=0;
while(c<t){
a=c*0.4;
c=c+a;
m=m+1;

}
cout<<"El triple del capital es: "<<t;
cout<<"\n";
cout<<"El capital demora "<<m<<" meses en triplicar";

getch();
}
