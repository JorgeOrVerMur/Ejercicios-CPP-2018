/*
UNA PELOTA SE DEJA CAER DESDE UNA ALTURA h Y EN CADA REVOTE SUBE EL 7% MENOS DEL ANTERIOR. HACER UN PROGRAMA QUE LEA h Y QUE CALCULE E IMPRIMA EN CUAL REVOTE LA PELOTA NO ALCANZA A SUBIR LA SEXTA PARTE DE SU ALTURA INCIAL.
*/

#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<string>
void main(){
float h,t,r,a;
cout<<"ingrese la altura inicial: ";
cin>>h;
t=(h/6);
r=0;

while(h>t){
a=h*0.07;
h=h-a;
r=r+1;

}
cout<<"La sexta parte es:"<<t;
cout<<"\n";
cout<<"Revota "<<r<<" veces";

getch();
}